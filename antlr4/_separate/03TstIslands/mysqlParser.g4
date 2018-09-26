/*
MySQL (Positive Technologies) grammar
GNU GPL Licence
Copyright (c) 2015-2016, Ivan Kochurkin (kvanttt@gmail.com), Positive Technologies.
Copyright  (c) 2016, Ivan Khudyashev (IHudyashov@ptsecurity.com)

GNU GPL https://www.gnu.org/licenses/gpl-3.0.ru.html

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
/*
Remarks:
Grammar is still in progress. That's why it is some spec remarks in text
!!LESS_POWER!! - means that rule recoginze NOT ALL correct constructions in language
!!GREATER_POWER!! - means that rule recognize ALL correct constructions in language,
  but plus some incorrect constructions
!!INTERNAL_DEPENDENCE!! - means that there are exists dependencies between elements of
  sentence, which can not be expressed simple ANTLR grammar constructions
*/

parser grammar mysqlParser;

options { tokenVocab=mysqlLexer; }

// ****************************************************************************
// I Parser
// ****************************************************************************

// ---------------------
// Top Level Description
// ---------------------

root:
	batch* EOF
	;

batch:
	sql_clauses;

sql_clauses:
	(sql_clause SEMI?)+
	;
	
sql_clause:
	ddl_clause | dml_clause | security_statement | transaction_statement | another_statement
	;

// TODO: claster_clause

ddl_clause:
	create_database | create_table | create_tablespace | create_index | create_procedure | create_function | create_view | create_trigger | create_event | create_logfile_group | create_server
	| alter_database | alter_table | alter_tablespace | alter_procedure | alter_function | alter_view | alter_event | alter_logfile_group | alter_server
	| drop_database | drop_table | drop_tablespace | drop_index | drop_procedure | drop_function | drop_view | drop_trigger | drop_event | drop_logfile_group | drop_server
	| rename_table | truncate_table
	;

dml_clause:
	dml_clause_compound
	| load_data_statement | load_xml_statement | do_statement
	;

dml_clause_compound:
	select_statement | select_statement_into | insert_statement | update_statement | delete_statement | replace_statement | call_statement
	;

security_statement:
	create_user | alter_user | rename_user | drop_user | grant_statement | grant_proxy | revoke_statement | revoke_proxy
	;

transaction_statement:
	start_transaction | begin_work | commit_work | rollback_work
	| savepoint_clause | rollback_clause | release_clause | lock_tables | unlock_tables
	;
// TODO: describe XA Transactions

cfl_statement: // NOT INCLUDE IN sql_clause, but include in compound routine
	cfl_statement_compound
	| declare_statement
	;

cfl_statement_compound:
	compound_statement | case_statement | if_statement | leave_statement | loop_statement | repeat_statement | while_statement | cursor_statement | iterate_statement | return_statement
	;


another_statement:
	set_statement | show_statement | not_classified_statement
	;

//-------------------------
// Data Definition Language
//-------------------------
create_database: // !!GREATER_POWER!!
	CREATE (DATABASE | SCHEMA) if_not_exists? id_ (create_database_option)*
	;

create_database_option:
	DEFAULT? CHARACTER SET '='? charset_name
	| DEFAULT? COLLATE '='? collation_name
	;

//---

create_table:
	CREATE TEMPORARY? TABLE if_not_exists? id_ dot_ext_id? (LIKE id_ dot_ext_id? | '(' LIKE id_ dot_ext_id? ')' ) //!!INTERNAL_DEPENDENCE!!
	| CREATE TEMPORARY? TABLE if_not_exists? id_ dot_ext_id? column_def_table_constraints table_options? partition_options?
	| CREATE TEMPORARY? TABLE if_not_exists? id_ dot_ext_id? column_def_table_constraints? table_options? partition_options? (IGNORE | REPLACE)? AS? select_statement
	;

column_def_table_constraints: // !!GREATER_POWER!!
	'(' column_def_table_constraint (',' column_def_table_constraint)* ')'
	;

column_def_table_constraint:
	id_ column_definition
	| table_constraint
	| index_column_definition
	;

column_definition: // !!GREATER_POWER!! - on specification, BUT TEST SHOWS THAT'S ALL OK!
	data_type 
	(
		null_notnull
		| DEFAULT default_value // !!GREATER_POWER!!
		| AUTO_INCREMENT // TODO: must be contex-dependence grammar rule
		| PRIMARY? KEY
		| UNIQUE KEY?
		| COMMENT STRING_LITERAL
		| COLUMN_FORMAT (FIXED | DYNAMIC | DEFAULT)
		| STORAGE (DISK | MEMORY | DEFAULT)
		| reference_definition // !!GREATER_POWER!!
	)*
	;

table_constraint: // !!GREATER_POWER!!
	(CONSTRAINT id_)? PRIMARY KEY index_type? index_col_names index_option*
	| (CONSTRAINT id_)? UNIQUE (INDEX | KEY)? id_? index_type? index_col_names index_option*
	| (CONSTRAINT id_)? FOREIGN KEY id_? index_col_names reference_definition
	| CHECK '(' expression ')'
	;

index_column_definition:
	(INDEX | KEY) id_? index_type? index_col_names index_option*
	| (FULLTEXT | SPATIAL) (INDEX | KEY)? id_? index_col_names index_option*
	;

partition_options:
	PARTITION BY partition_function_definition (PARTITIONS decimal_literal)? 
	(SUBPARTITION BY linear_partition_func_def (SUBPARTITIONS decimal_literal)? )? 
	('(' partition_def (',' partition_def)* ')')?
	;

partition_function_definition:
	linear_partition_func_def
	| (RANGE | LIST) ('(' expression ')' | COLUMNS '(' column_name_list ')' )
	;

linear_partition_func_def:
	LINEAR? HASH '(' expression ')'
	| LINEAR? KEY (ALGORITHM '=' ('1' | '2'))? '(' column_name_list ')'
	;

partition_def:
	PARTITION id_ 
	(VALUES (LESS THAN ( '(' (expression | value_list) ')' | MAXVALUE)  |  IN  '(' value_list ')' ) )?
	(STORAGE? ENGINE '='? engine_name)?
	(COMMENT '='? STRING_LITERAL)?
	(DATA DIRECTORY '='? STRING_LITERAL)? // !!GREATER_POWER!!
	(INDEX DIRECTORY '='? STRING_LITERAL)? // !!GREATER_POWER!!
	(MAX_ROWS '='? decimal_literal)?
	(MIN_ROWS '='? decimal_literal)?
	(TABLESPACE '='? id_)?
	(NODEGROUP '='? nodegroup_id)?
	(subpartition_def (',' subpartition_def)*)?
	;

value_list:
	constant_null_value (',' constant_null_value)*
	;

subpartition_def:
	SUBPARTITION id_
	(STORAGE? ENGINE '='? engine_name)?
	(COMMENT '='? STRING_LITERAL)?
	(DATA DIRECTORY '='? STRING_LITERAL)? // !!GREATER_POWER!!
	(INDEX DIRECTORY '='? STRING_LITERAL)? // !!GREATER_POWER!!
	(MAX_ROWS '='? decimal_literal)?
	(MIN_ROWS '='? decimal_literal)?
	(TABLESPACE '='? id_)?
	(NODEGROUP '='? nodegroup_id)?
	;

//---

create_tablespace:
// TODO: filename must replace STRING_LITERAL
	CREATE TABLESPACE id_ 
	ADD DATAFILE STRING_LITERAL // !!GREATER_POWER!!
	USE LOGFILE GROUP id_
	(EXTENT_SIZE '='? filesize_literal)?
	(INITIAL_SIZE '='? filesize_literal)?
	(AUTOEXTEND_SIZE '='? filesize_literal)?
	(MAX_SIZE '='? filesize_literal)?
	(NODEGROUP '='? nodegroup_id)?
	WAIT?
	(COMMENT '='? STRING_LITERAL)?
	ENGINE '='? engine_name
	;

//---

create_index: // !GREATER_POWER!
	CREATE (ONLINE | OFFLINE)? 
	(UNIQUE | FULLTEXT | SPATIAL)? 
	INDEX id_ 
	index_type? 
	ON id_ dot_ext_id? index_col_names
	index_option* (ALGORITHM '='? (DEFAULT | INPLACE | COPY) | LOCK '='? (DEFAULT | NONE | SHARED | EXCLUSIVE))?
	;
//---

create_procedure:
	CREATE owner_statement? PROCEDURE id_ dot_ext_id? '(' proc_param? (',' proc_param)* ')' characteristic* compound_statement
	;

create_function:
	CREATE owner_statement? FUNCTION id_ dot_ext_id? '(' func_param? (',' func_param)* ')' RETURNS data_type characteristic* compound_statement
	// TODO: create function on shared_library http://dev.mysql.com/doc/refman/5.6/en/create-function-udf.html
	;

proc_param:
	(IN | OUT | INOUT) id_ data_type
	;

func_param:
	id_ data_type
	;

characteristic:
	COMMENT STRING_LITERAL
	| LANGUAGE SQL
	| NOT? DETERMINISTIC
	| (CONTAINS SQL | NO SQL | READS SQL DATA | MODIFIES SQL DATA)
	| sql_security_statement
	;

//---

create_view:
	CREATE (OR REPLACE)? 
	(ALGORITHM '=' (UNDEFINED | MERGE | TEMPTABLE))? 
	owner_statement? 
	sql_security_statement? 
	VIEW id_ dot_ext_id? ('(' column_name_list ')')? AS select_statement
	(WITH (CASCADED | LOCAL)? CHECK OPTION)?
	;

//---

create_trigger:
	CREATE owner_statement? TRIGGER id_ dot_ext_id? (BEFORE | AFTER) (INSERT | UPDATE | DELETE)
	ON id_ dot_ext_id? FOR EACH ROW compound_clause
	;

//---

create_event:
	CREATE owner_statement? EVENT if_not_exists? id_ dot_ext_id?
	ON SCHEDULE schedule_expression
	(ON COMPLETION NOT? PRESERVE)?
	(ENABLE | DISABLE | DISABLE ON SLAVE)?
	(COMMENT STRING_LITERAL)?
	DO compound_clause
	;

schedule_expression:
	AT timestamp_value interval_expr*
	| EVERY decimal_literal interval_type (STARTS timestamp_value interval_expr*)? (ENDS timestamp_value interval_expr*)?
	;

timestamp_value: // TODO: Check: May be expression??
	CURRENT_TIMESTAMP
	| string_literal 
	| decimal_literal
	;

interval_expr:
	'+' INTERVAL expression interval_type
	;

interval_type:
	interval_type_base
	| YEAR | YEAR_MONTH | DAY_HOUR | DAY_MINUTE
	| DAY_SECOND | HOUR_MINUTE | HOUR_SECOND | MINUTE_SECOND
	| SECOND_MICROSECOND | MINUTE_MICROSECOND
	| HOUR_MICROSECOND | DAY_MICROSECOND
	;

//---

create_logfile_group:
	CREATE LOGFILE GROUP id_
	ADD UNDOFILE STRING_LITERAL
	(INITIAL_SIZE '='? filesize_literal)?
	(UNDO_BUFFER_SIZE '='? filesize_literal)?
	(REDO_BUFFER_SIZE '='? filesize_literal)?
	(NODEGROUP '='? nodegroup_id)?
	WAIT?
	(COMMENT '='? STRING_LITERAL)?
	ENGINE '='? engine_name
	;

//---

create_server:
	CREATE SERVER id_
	FOREIGN DATA WRAPPER wrapper_name
	OPTIONS '(' server_option (',' server_option)* ')'
	;

server_option:
	HOST STRING_LITERAL
	| DATABASE STRING_LITERAL
	| USER STRING_LITERAL
	| PASSWORD STRING_LITERAL
	| SOCKET STRING_LITERAL
	| OWNER STRING_LITERAL
	| PORT STRING_LITERAL
	;

//---

alter_database:
	ALTER (DATABASE | SCHEMA) id_? (DEFAULT? CHARACTER SET '='? charset_name | DEFAULT? COLLATE '=' collation_name)+
	| ALTER (DATABASE | SCHEMA) id_ UPGRADE DATA DIRECTORY NAME
	;
//---

// TODO: ending specifications
alter_table:
	ALTER (ONLINE | OFFLINE)? IGNORE? TABLE id_ dot_ext_id? alter_table_spec (',' alter_table_spec)* partition_options*
	;

alter_table_spec:
	table_option
	| ADD COLUMN? id_ column_definition (FIRST | AFTER id_)?
	| ADD COLUMN? '(' id_ column_definition ( ',' id_ column_definition)* ')'
	| ADD (INDEX | KEY) id_? index_type? index_col_names index_option*
	| ADD (CONSTRAINT id_)? PRIMARY KEY index_type? index_col_names index_option*
	| ADD (CONSTRAINT id_)? UNIQUE (INDEX | KEY)? id_? index_type? index_col_names index_option*
	| ADD (FULLTEXT | SPATIAL) (INDEX | KEY)? id_? index_col_names index_option*
	| ADD (CONSTRAINT id_)? FOREIGN KEY id_? index_col_names reference_definition
	| ALGORITHM '='? (DEFAULT | INPLACE | COPY)
	| ALTER COLUMN? id_ (SET DEFAULT default_value | DROP DEFAULT)
	| CHANGE COLUMN? id_ id_ column_definition (FIRST | AFTER id_)?
	| LOCK '='? (DEFAULT | NONE | SHARED | EXCLUSIVE)
	| MODIFY COLUMN? id_ column_definition (FIRST | AFTER id_)?
	| DROP COLUMN? id_
	| DROP PRIMARY KEY
	| DROP (INDEX | KEY) id_
	| DROP FOREIGN KEY id_ // TODO: make compiance
	| DISABLE KEYS
	| ENABLE KEYS
	| RENAME (TO | AS)? id_
	| ORDER BY column_name_list
	| CONVERT TO CHARACTER SET charset_name (COLLATE collation_name)?
	| DEFAULT? CHARACTER SET '=' charset_name (COLLATE '=' collation_name)?
	| DISCARD TABLESPACE
	| IMPORT TABLESPACE
	| FORCE
	| ADD PARTITION partition_def
	| DROP PARTITION id_
	| TRUNCATE PARTITION (id_ | ALL)
	| COALESCE PARTITION decimal_literal
	| REORGANIZE PARTITION id_ INTO '(' partition_def (',' partition_def)* ')'
	| EXCHANGE PARTITION id_ WITH TABLE id_
	| ANALYZE PARTITION (id_ | ALL)
	| CHECK PARTITION (id_ | ALL)
	| OPTIMIZE PARTITION (id_ | ALL)
	| REBUILD PARTITION (id_ | ALL)
	| REPAIR PARTITION (id_ | ALL)
	| REMOVE PARTITIONING
	;

//---

alter_tablespace:
	ALTER TABLESPACE id_
	(ADD | DROP) DATAFILE STRING_LITERAL
	(INITIAL_SIZE '=' filesize_literal)?
	WAIT?
	ENGINE '='? engine_name
	;

//---

alter_procedure:
	ALTER PROCEDURE id_ dot_ext_id? characteristic*
	;

//---

alter_function:
	ALTER FUNCTION id_ dot_ext_id? characteristic*
	;

//---

alter_view:
	ALTER (ALGORITHM '=' (UNDEFINED | MERGE | TEMPTABLE))? owner_statement? sql_security_statement? 
	VIEW id_ dot_ext_id? ('(' column_name_list ')')? AS select_statement
	(WITH (CASCADED | LOCAL)? CHECK OPTION)?
	;

//---

alter_event:
	ALTER owner_statement? EVENT id_ dot_ext_id?
	(ON SCHEDULE schedule_expression)?
	(ON COMPLETION NOT? PRESERVE)?
	(RENAME TO id_ dot_ext_id?)?
	(ENABLE | DISABLE | DISABLE ON SLAVE)?
	(COMMENT STRING_LITERAL)?
	(DO compound_clause)?
	;

//---

alter_logfile_group:
	ALTER LOGFILE GROUP id_
	ADD UNDOFILE STRING_LITERAL
	(INITIAL_SIZE '='? filesize_literal)?
	WAIT? ENGINE '='? engine_name
	;

//---

alter_server:
	ALTER SERVER id_ OPTIONS '(' server_option (',' server_option)* ')'
	;

//--

drop_database:
	DROP (DATABASE | SCHEMA) if_exists? id_
	;

//--

drop_table:
	DROP TEMPORARY? TABLE if_exists? id_ dot_ext_id? (',' id_ dot_ext_id?)* (RESTRICT | CASCADE)?
	;

//--

drop_tablespace:
	DROP TABLESPACE id_ ENGINE '=' engine_name
	;

//--

drop_index:
	DROP INDEX (ONLINE | OFFLINE)? id_ ON id_ dot_ext_id? (ALGORITHM '='? (DEFAULT | INPLACE | COPY))? (LOCK '='? (DEFAULT | NONE | SHARED | EXCLUSIVE))?
	;

//--

drop_procedure:
	DROP PROCEDURE if_exists? id_ dot_ext_id?
	;

//--

drop_function:
	DROP FUNCTION if_exists? id_ dot_ext_id?
	;

//--

drop_view:
	DROP VIEW if_exists? id_ dot_ext_id? (',' id_ dot_ext_id?)* (RESTRICT | CASCADE)?
	;

//--

drop_trigger:
	DROP TRIGGER if_exists? id_ dot_ext_id?
	;

//--

drop_event:
	DROP EVENT if_exists? id_ dot_ext_id?
	;

//--

drop_logfile_group:
	DROP LOGFILE GROUP id_ ENGINE '=' engine_name
	;

//--

drop_server:
	DROP SERVER if_exists? id_
	;

//--

rename_table:
	RENAME TABLE id_ dot_ext_id? TO id_ dot_ext_id? (',' id_ dot_ext_id? TO id_ dot_ext_id?)*
	;

//--

truncate_table:
	TRUNCATE TABLE? id_ dot_ext_id?
	;
//---------------------------
// Data Manipulation Language
//---------------------------

select_statement:
	(
		query_specification // simple SELECT 
		| query_expression // variable SELECT expression without UNION
		| query_specification union_statement+ order_by_clause? limit_clause? // simple select without parenthesis on UNION-element
		| query_expression union_parenth+ order_by_clause? limit_clause? // select with!! separete parenthesis on each UNION-element
	)
	(FOR UPDATE | LOCK IN SHARE MODE)?
	;

//---

select_statement_into:
	DUMMY
	// query_expression_into
	;

//---

insert_statement:
	INSERT (LOW_PRIORITY | DELAYED | HIGH_PRIORITY)? IGNORE? INTO? id_ dot_ext_id?
	(PARTITION '(' id_ (',' id_)* ')' )?
	(
		('(' column_name_list ')')? insert_statement_value
		| SET update_elem (',' update_elem)*
	)
	(ON DUPLICATE KEY UPDATE update_elem (',' update_elem)*)?
	;

insert_statement_value:
	(VALUES | VALUE) '(' expression_list ')' (',' '(' expression_list ')')*
	| select_statement
	;
//---

update_statement:
	single_update_statement
	| multiple_update_statement
	;

single_update_statement:
	UPDATE LOW_PRIORITY? IGNORE? id_ dot_ext_id? (AS? id_)?
	SET update_elem (',' update_elem)*
	(WHERE search_condition)? order_by_clause? limit_clause?
	;

multiple_update_statement:
	UPDATE LOW_PRIORITY? IGNORE? table_sources
	SET update_elem (',' update_elem)*
	(WHERE search_condition)?
	;

//---

delete_statement:
	single_delete_statement
	| multiple_delete_statement
	;

single_delete_statement:
	DELETE LOW_PRIORITY? QUICK? IGNORE? FROM id_ dot_ext_id? (AS? id_)?
	(PARTITION '(' id_ (',' id_)* ')' )?
	(WHERE search_condition)? order_by_clause? limit_clause?
	;

multiple_delete_statement:
	DELETE LOW_PRIORITY? QUICK? IGNORE?
	(
		id_ dot_ext_id? ('.' '*')? (',' id_ dot_ext_id? ('.' '*')?)* FROM table_sources // table_name is tbl_name.* or tbl_name or db_name.tbl_name or db_name.tbl_name.*
		| FROM id_ dot_ext_id? ('.' '*')? (',' id_ dot_ext_id? ('.' '*')?)* USING table_sources
	)
	(WHERE search_condition)?
	;
//---

replace_statement:
	REPLACE (LOW_PRIORITY | DELAYED)? INTO? id_ dot_ext_id?
	(PARTITION '(' id_ (',' id_)* ')' )?
	(
		('(' column_name_list ')')? insert_statement_value
		| SET update_elem (',' update_elem)*
		| ('(' column_name_list ')')? select_statement
	)
	;
//---

load_data_statement:
	LOAD DATA (LOW_PRIORITY | CONCURRENT)? LOCAL? INFILE STRING_LITERAL
	(REPLACE | IGNORE)? INTO TABLE id_ dot_ext_id?
	(PARTITION '(' id_ (',' id_)* ')' )?
	(CHARACTER SET charset_name)?
	((FIELDS | COLUMNS) (TERMINATED BY STRING_LITERAL)? (OPTIONALLY? ENCLOSED BY STRING_LITERAL)?  (ESCAPED BY STRING_LITERAL)? )?
	(LINES (STARTING BY STRING_LITERAL)? (TERMINATED BY STRING_LITERAL) )?
	( IGNORE decimal_literal (LINES | ROWS) )?
	( '(' column_name_list ')' )?
	(SET update_elem (',' update_elem)*)? 
	;
//---

load_xml_statement:
	LOAD XML (LOW_PRIORITY | CONCURRENT)? LOCAL? INFILE STRING_LITERAL
	(REPLACE | IGNORE)? INTO TABLE id_ dot_ext_id?
	(CHARACTER SET charset_name)?
 	(ROWS IDENTIFIED BY '<' STRING_LITERAL '>')?
	( IGNORE decimal_literal (LINES | ROWS) )?
	( '(' column_name_list ')' )?
	(SET update_elem (',' update_elem)*)? 
	;
//---

do_statement:
	DO expression_list
	;
//---

call_statement:
	CALL id_ dot_ext_id? 
	(
		'(' expression_list ')'
		'(' ')'
	)?
	;
//------------------------------
// Account Management Statements
//------------------------------
create_user:
	CREATE USER user_spec (',' user_spec)*
	;

//---

alter_user:
	ALTER USER user_name PASSWORD EXPIRE ( ',' user_name PASSWORD EXPIRE)*
	;

//---

rename_user:
	RENAME USER user_name TO user_name (',' user_name TO user_name)
	;

//---

drop_user:
	DROP USER user_name (',' user_name)*
	;

//---

grant_statement:
	GRANT grant_permission ( '(' column_name_list ')' )?
	( ',' grant_permission ( '(' column_name_list ')' )? )*
	ON (TABLE | FUNCTION | PROCEDURE)? permission_level
	TO user_spec (',' user_spec)*
	(REQUIRE (NONE | tls_option (AND? tls_option)* ) )?
	(WITH (GRANT OPTION | resourse_option) )?
	;

//TODO: check correctness
permission_level:
	'*'
	| '*' '.' '*'
	| id_ '.' '*'
	| id_ '.' id_
	| id_
	;

tls_option:
	SSL
	| X509
	| CIPHER STRING_LITERAL
	| ISSUER STRING_LITERAL
	| SUBJECT STRING_LITERAL
	;

resourse_option:
	MAX_QUERIES_PER_HOUR decimal_literal
	| MAX_UPDATES_PER_HOUR decimal_literal
	| MAX_CONNECTIONS_PER_HOUR decimal_literal
	| MAX_USER_CONNECTIONS decimal_literal
	;

//---

grant_proxy:
	GRANT PROXY ON user_spec TO user_spec (',' user_spec)*
	(WITH GRANT OPTION)?
	;

//---

revoke_statement:
	REVOKE grant_permission ( '(' column_name_list ')' )?
	( ',' grant_permission ( '(' column_name_list ')' )? )*
	ON (TABLE | FUNCTION | PROCEDURE)? permission_level
	FROM user_name (',' user_name)*
	;

//---

revoke_proxy:
	REVOKE PROXY ON user_name FROM user_name (',' user_name)*
	;

//-------------------
// Transact Statement
//-------------------
start_transaction:
	START TRANSACTION (transact_option (',' transact_option)* )?
	;

transact_option:
	WITH CONSISTENT SNAPSHOT
	| READ WRITE
	| READ ONLY
	;

//---

begin_work:
	BEGIN WORK?
	;

//---

commit_work:
	COMMIT WORK? (AND NO? CHAIN)? (NO? RELEASE)?
	;

//---

rollback_work:
	ROLLBACK WORK? (AND NO? CHAIN)? (NO? RELEASE)?
	;

//---

savepoint_clause:
	SAVEPOINT id_
	;

//---

rollback_clause:
	ROLLBACK WORK? TO SAVEPOINT? id_
	;

//---

release_clause:
	RELEASE SAVEPOINT id_
	;

//---

lock_tables:
	LOCK TABLES id_ dot_ext_id? (AS? id_)? (READ LOCAL? | LOW_PRIORITY? WRITE)
	(',' id_ dot_ext_id? (AS? id_)? (READ LOCAL? | LOW_PRIORITY? WRITE))*
	;

//---

unlock_tables:
	UNLOCK TABLES
	;
//-------------------------
// Control-of-Flow Language
//-------------------------
compound_statement: // TODO: INTERNAL dependences between start and end labels 
	(id_ ':')? BEGIN
	(
		(declare_variable SEMI)*
		(declare_condition SEMI)*
		(declare_cursor SEMI)*
		(declare_handler SEMI)*
		compound_clause+
	)?
	END id_?
	;

compound_clause:
	(cfl_statement_compound | ddl_clause | dml_clause_compound | security_statement | another_statement) SEMI
	;

declare_statement:
	declare_variable
	| declare_condition
	| declare_cursor
	| declare_handler
	;

declare_variable:
	DECLARE id_ (',' id_)* data_type (DEFAULT default_value)?
	;

declare_condition:
	DECLARE id_ CONDITION FOR (DECIMAL | SQLSTATE VALUE? STRING_LITERAL)
	;

declare_cursor:
	DECLARE id_ CURSOR FOR select_statement
	;

declare_handler:
	DECLARE (CONTINUE | EXIT | UNDO) HANDLER FOR handler_condition_value (',' handler_condition_value)*
	;

handler_condition_value:
	DECIMAL
	| SQLSTATE VALUE? STRING_LITERAL
	| id_
	| SQLWARNING
	| NOT FOUND
	| SQLEXCEPTION
	;

case_statement:
	CASE (expression | id_)?
	(WHEN expression THEN compound_clause )+
	(ELSE compound_clause )?
	END CASE
	;

if_statement:
	IF search_condition THEN compound_clause
	(ELSEIF compound_clause )*
	(ELSE compound_clause )?
	END IF
	;

iterate_statement:
	ITERATE id_
	;

leave_statement:
	LEAVE id_
	;

loop_statement: // TODO: INTERNAL dependences between start and end labels 
	(id_ ':')? LOOP (compound_clause | iterate_statement)+ END LOOP id_?
	;

repeat_statement: // TODO: INTERNAL dependences between start and end labels 
	(id_ ':')? REPEAT (compound_clause | iterate_statement)+ UNTIL search_condition END REPEAT id_?
	;

return_statement:
	RETURN expression
	;

while_statement: // TODO: INTERNAL dependences between start and end labels 
	(id_ ':')? WHILE search_condition DO (compound_clause | iterate_statement)+ END WHILE id_?
	;

cursor_statement:
	CLOSE id_
	| FETCH (NEXT? FROM)? id_ INTO id_ (',' id_)*
	| OPEN id_
	;

//----------------
// Other Statement
//----------------

set_statement:
	SET mysql_variable '=' expression 																		#set_variable_assignment
	| SET (GLOBAL | SESSION | '@' '@' (GLOBAL | SESSION) '.' )? id_ '=' expression							#set_variable_assignment
	| SET (GLOBAL | SESSION)? TRANSACTION trans_characteristic (',' trans_characteristic)*					#set_transaction
	| 	SET PASSWORD (FOR user_name)? '=' 
	(
		PASSWORD '(' STRING_LITERAL ')'
		| OLD_PASSWORD '(' STRING_LITERAL ')'
		| STRING_LITERAL // hash
	)																										#set_password_statement
	| SET NAMES (charset_name (COLLATE collation_name)? | DEFAULT)											#set_names
	| SET (CHARACTER SET | CHARSET) (charset_name | DEFAULT)												#set_charset
	| SET AUTOCOMMIT '=' ('0' | '1')																		#set_autocommit
	;
//---

show_statement:
	SHOW
		(
		AUTHORS
		| (BINARY | MASTER) LOGS
		| BINLOG EVENTS (IN STRING_LITERAL)? (FROM decimal_literal)? (LIMIT (decimal_literal ',')? decimal_literal)?
		| CHARACTER SET (LIKE STRING_LITERAL | WHERE expression)?
		| COLLATION (LIKE STRING_LITERAL | WHERE expression)?
		| FULL? COLUMNS FROM id_ (FROM id_)? (LIKE STRING_LITERAL | WHERE expression)?
		| CONTRIBUTORS
		| CREATE (DATABASE | EVENT | FUNCTION | PROCEDURE | TABLE | TRIGGER | VIEW) id_
		| DATABASES (LIKE STRING_LITERAL | WHERE expression)?
		| ENGINE engine_name (STATUS | MUTEX)
		| STORAGE? ENGINES
		| ERRORS (LIMIT (decimal_literal ',')? decimal_literal)?
		| EVENTS
		| FUNCTION CODE id_
		| FUNCTION STATUS (LIKE STRING_LITERAL | WHERE expression)?
		| GRANTS FOR user_name
		| INDEX FROM id_ (FROM id_)?
		| MASTER STATUS
		| OPEN TABLES (FROM id_)? (LIKE STRING_LITERAL | WHERE expression)?
		| PLUGINS
		| PROCEDURE CODE id_
		| PROCEDURE STATUS (LIKE STRING_LITERAL | WHERE expression)?
		| PRIVILEGES
		| FULL? PROCESSLIST
		| PROFILE id_ (FOR QUERY decimal_literal)? (OFFSET decimal_literal)? (LIMIT decimal_literal)?
		| PROFILES
		| RELAYLOG EVENTS (IN STRING_LITERAL)? (FROM decimal_literal)? (LIMIT (decimal_literal ',')? decimal_literal)?
		| SLAVE (HOSTS | STATUS)
		| (GLOBAL | SESSION)? STATUS (LIKE STRING_LITERAL | WHERE expression)?
		| TABLE STATUS (FROM id_)? (LIKE STRING_LITERAL | WHERE expression)?
		| FULL? TABLES (FROM id_)? (LIKE STRING_LITERAL | WHERE expression)?
		| TRIGGERS (FROM id_)? (LIKE STRING_LITERAL | WHERE expression)?
		| (GLOBAL | SESSION)? VARIABLES (LIKE STRING_LITERAL | WHERE expression)?
		| WARNINGS (LIMIT (decimal_literal ',')? decimal_literal)?
		)
	;
//---

not_classified_statement:
	USE id_																									#use_statement
	| RESET (MASTER | QUERY CACHE | SLAVE)																	#reset_statement
	| KILL (CONNECTION | QUERY)? DECIMAL_LITERAL 															#kill_statement
	| FLUSH (NO_WRITE_TO_BINLOG | LOCAL)? flush_option (',' flush_option)*									#flush_statement
	| BINLOG STRING_LITERAL 																				#binlog_statement
	| INSTALL PLUGIN id_ SONAME STRING_LITERAL 																#install_plugin_statement
	| UNINSTALL PLUGIN id_ 																					#uninstall_plugin_statement
	| REPAIR (NO_WRITE_TO_BINLOG | LOCAL)? TABLE id_ dot_ext_id? (',' id_ dot_ext_id? )*
		QUICK? EXTENDED? USE_FRM?																			#repair_table_statement
	| OPTIMIZE (NO_WRITE_TO_BINLOG | LOCAL)? TABLE id_ dot_ext_id? (',' id_ dot_ext_id? )*					#optimize_table_statement
	| CHECKSUM TABLE id_ dot_ext_id? (',' id_ dot_ext_id? )* (QUICK | EXTENDED)? 								#checksum_table_statement
	| CHECK TABLE id_ dot_ext_id? (',' id_ dot_ext_id? )* check_table_option*									#check_table_statement
	| ANALYZE (NO_WRITE_TO_BINLOG | LOCAL)? TABLE id_ dot_ext_id? (',' id_ dot_ext_id? )* 					#analyze_table_statement
	| HELP STRING_LITERAL 																					#help_statement
	| (EXPLAIN | DESCRIBE | DESC) id_ dot_ext_id?															#describe_statement
	| (EXPLAIN | DESCRIBE | DESC) (EXTENDED | PARTITIONS | FORMAT '=' (TRADITIONAL | JSON))?
		(select_statement | delete_statement | insert_statement | replace_statement | update_statement)		#describe_statement
	// TODO: CACHE INDEX
	// TODO: LOAD INDEX INTO CACHE
	;

flush_option:
	DES_KEY_FILE
	| HOSTS
	| (BINARY | ENGINE | ERROR | GENERAL | RELAY | SLOW)? LOGS
	| PRIVILEGES
	| QUERY CACHE
	| STATUS
	| TABLES (WITH READ LOCK)?
	| TABLES id_ (',' id_)* (WITH READ LOCK | FOR EXPORT)?
	| USER_RESOURCES
	;

check_table_option:
	FOR UPGRADE | QUICK | FAST | MEDIUM | EXTENDED | CHANGED
	;

//---

// ****************************************************************************
// I.A Parser. Details
// ****************************************************************************

//----------------
// Select Statement
//----------------

query_expression:
	'(' query_expression ')'
	| '(' query_specification ')'
	;

/*
query_expression_into:
	'(' query_expression_into ')'
	| '(' query_specification_into ')'
	;
*/


union_parenth:
	UNION (ALL|DISTINCT)? query_expression
	;
	
union_statement:
	UNION (ALL|DISTINCT)? ( query_expression | query_specification)
	;

order_by_clause:
	ORDER BY order_by_expression (',' order_by_expression)*
	;
	
order_by_expression:
	expression (ASC | DESC)?
	;

limit_clause:
	LIMIT ((decimal_literal ',')? decimal_literal| decimal_literal OFFSET decimal_literal)
	;

query_specification:
	SELECT select_spec* select_list select_into_expression? from_clause? order_by_clause? limit_clause?
	;

/*
query_specification_into:
	SELECT select_spec* select_list select_into_expression from_clause? order_by_clause? limit_clause?
	;
*/

select_spec:
	(ALL|DISTINCT|DISTINCTROW)
	| HIGH_PRIORITY
	| STRAIGHT_JOIN
	| SQL_SMALL_RESULT
	| SQL_BIG_RESULT
	| SQL_BUFFER_RESULT
	| (SQL_CACHE|SQL_NO_CACHE)
	| SQL_CALC_FOUND_ROWS
	;

select_list:
	('*' | select_list_elem) (',' select_list_elem)*
	;

select_list_elem:
	(id_ '.')? id_ '.' '*'
	| function_call (AS? id_)?
	| (LOCAL_ID VAR_ASSIGN)? expression (AS? id_)?
	;

select_into_expression:
	INTO (LOCAL_ID | id_) (',' (LOCAL_ID | id_) )*
	| INTO DUMPFILE STRING_LITERAL
	| (
		INTO OUTFILE STRING_LITERAL CHARACTER SET charset_name 
		( (FIELDS | COLUMNS) (TERMINATED BY STRING_LITERAL)? (OPTIONALLY? ENCLOSED BY STRING_LITERAL)? (ESCAPED BY STRING_LITERAL)? )? 
		(LINES (STARTING BY STRING_LITERAL)? (TERMINATED BY STRING_LITERAL)? )?
	  )
	;

from_clause:
	FROM table_sources (WHERE search_condition)? (GROUP BY group_by_item (',' group_by_item)*)? (HAVING search_condition)?
	;

table_sources:
	table_source (',' table_source)*
	;

table_source:
	table_source_item join_part*
	| '(' table_source_item join_part* ')'
	;

table_source_item:
	id_ dot_ext_id? (PARTITION id_)? (AS? id_)? (index_hint (',' index_hint)* )?
	| derived_table AS? id_
	| '(' table_sources ')'
	;

index_hint:
	(USE | IGNORE | FORCE) (INDEX|KEY) (FOR (JOIN | ORDER BY | GROUP BY))? '(' id_ (',' id_)* ')'
	;

join_part:
	(INNER | CROSS)? JOIN table_source_item (ON search_condition | USING '(' column_name_list ')')?
	| STRAIGHT_JOIN table_source_item (ON search_condition)?
	| (LEFT | RIGHT) OUTER? JOIN table_source_item (ON search_condition | USING '(' column_name_list ')')
	| NATURAL ((LEFT | RIGHT) OUTER?)? JOIN table_source_item
	;

derived_table:
	subquery
	| '(' subquery ')'
	;

group_by_item:
	expression
	;
	
//----------------
// DB Objects
//----------------

collation_name:
	id_ | STRING_LITERAL;

nodegroup_id:
	id_;

wrapper_name: // !!!GREATER POWER!!!
	MYSQL | STRING_LITERAL;

user_name:
	STRING_USER_NAME;

full_column_name:
	id_ (dot_ext_id dot_ext_id? )?
	;

//------------------
// Common Expressons
//------------------

default_value:
	NULL_LITERAL
	| constant
	;

constant_null_value:
	constant
	| null_notnull
	;

column_name_list:
	id_ (',' id_)*
	;

index_col_names:
	'(' index_col_name (',' index_col_name)* ')'
	;

index_col_name:
	id_ ('(' decimal_literal ')')? (ASC | DESC)?
	;

reference_definition:
	REFERENCES id_ dot_ext_id? index_col_names
	(MATCH (FULL | PARTIAL | SIMPLE))?
	(
		ON DELETE reference_option
		| ON UPDATE reference_option
		| ON DELETE reference_option ON UPDATE reference_option
		| ON UPDATE reference_option ON DELETE reference_option
	)?
	;

reference_option:
	RESTRICT
	| CASCADE
	| SET NULL_LITERAL
	| NO ACTION
	;

index_type:
	USING (BTREE | HASH)
	;

index_option:
	KEY_BLOCK_SIZE '=' filesize_literal
	| index_type
	| WITH PARSER id_
	| COMMENT STRING_LITERAL
	;

table_options:
	table_option (','? table_option)*
	;

table_option:
	ENGINE '='? engine_name
	| AUTO_INCREMENT '='? decimal_literal
	| AVG_ROW_LENGTH '='? decimal_literal
	| DEFAULT? (CHARACTER SET | CHARSET) '='? charset_name
	| CHECKSUM '='? ('0' | '1')
	| DEFAULT? COLLATE '='? collation_name
	| COMMENT '='? STRING_LITERAL
	| CONNECTION '='? STRING_LITERAL // !!GREATER_POWER!!
	| DATA DIRECTORY '='? STRING_LITERAL // !!GREATER_POWER!!
	| DELAY_KEY_WRITE '='? ('0' | '1')
	| INDEX DIRECTORY '='? STRING_LITERAL //!!GREATER_POWER!!
	| INSERT_METHOD '='? (NO | FIRST | LAST)
	| KEY_BLOCK_SIZE '='? filesize_literal
	| MAX_ROWS '='? decimal_literal
	| MIN_ROWS '='? decimal_literal
	| PACK_KEYS '='? ('0' | '1' | DEFAULT)
	| PASSWORD '='? STRING_LITERAL
	| ROW_FORMAT '='? (DEFAULT | DYNAMIC | FIXED | COMPRESSED | REDUNDANT | COMPACT)
	| STATS_AUTO_RECALC '='? (DEFAULT | '0' | '1')
	| STATS_PERSISTENT '='? (DEFAULT | '0' | '1')
	| STATS_SAMPLE_PAGES '='? decimal_literal
	| TABLESPACE id_ (STORAGE (DISK | MEMORY | DEFAULT))?
	| UNION '='? '(' id_ dot_ext_id? (',' id_ dot_ext_id?)* ')'
	;

owner_statement:
	DEFINER '=' (user_name | CURRENT_USER ( '(' ')')?)
	;

sql_security_statement:
	SQL SECURITY (DEFINER | INVOKER)
	;

update_elem:
	full_column_name '=' expression
	;

user_spec:
	user_name 
	(
		IDENTIFIED
		(
			BY STRING_LITERAL
			| BY PASSWORD STRING_LITERAL // hash
			| WITH id_ /*auth_plugin*/ (AS STRING_LITERAL)?
		)
	)?
	;

trans_characteristic:
	ISOLATION LEVEL transaction_level
	| READ WRITE
	| READ ONLY
	;

function_call:
	specific_function_call
	| aggregate_windowed_function
	| scalar_function_name '(' function_args ')' // !!GREATER_POWER!!
	| scalar_function_name '(' ')'
// 	| PROCEDURE ANALYSE // TODO: describe this functions
	;

specific_function_call:
	CURRENT_DATE | CURRENT_TIME | CURRENT_TIMESTAMP | CURRENT_USER | LOCALTIME
	| CONVERT '(' expression ',' data_type_to_convert ')'
	| CONVERT '(' expression USING charset_name ')'
	| CAST '(' expression AS data_type_to_convert ')'
	| VALUES '(' full_column_name ')'
	| CASE expression (WHEN function_arg THEN function_arg)+ (ELSE function_arg)? END
	| CASE (WHEN search_condition THEN function_arg )+ (ELSE function_arg)? END
	| CHAR '(' function_args  (USING charset_name)? ')'
	| POSITION '(' (string_literal | expression) IN (string_literal | expression) ')'
	| SUBSTR '(' (string_literal | expression) FROM (decimal_literal | expression) (FOR (decimal_literal | expression) )? ')'
	| TRIM '(' ( (BOTH | LEADING | TRAILING) (string_literal | expression)? FROM )? (string_literal | expression) ')'
	| WEIGHT_STRING '(' (string_literal | expression) (AS (CHAR | BINARY) '(' decimal_literal ')' )?  levels_in_weight_string?  ')'
	| EXTRACT '(' interval_type FROM (string_literal | expression) ')'
	| GET_FORMAT '(' (DATE|TIME|DATETIME) ',' '\'' ( EUR | USA | JIS | ISO | INTERNAL ) '\'' ')'
	;

levels_in_weight_string:
	LEVEL 
		(decimal_literal | decimal_literal (',' decimal_literal)+ | decimal_literal '-' decimal_literal) (ASC | DESC | REVERSE)?
		(',' (decimal_literal | decimal_literal (',' decimal_literal)+ | decimal_literal '-' decimal_literal) (ASC | DESC | REVERSE)? )*
	;

aggregate_windowed_function:
	(AVG | MAX | MIN | SUM) '(' (ALL | DISTINCT)? function_arg ')'
	| COUNT '(' ('*' | ALL? function_arg) ')'
	| COUNT '(' DISTINCT function_args ')'
	| (BIT_AND | BIT_OR | BIT_XOR | STD | STDDEV | STDDEV_POP | STDDEV_SAMP | VAR_POP | VAR_SAMP | VARIANCE) '(' ALL? function_arg ')'
	| GROUP_CONCAT '(' DISTINCT? function_args (ORDER BY order_by_expression (',' order_by_expression)* )? (SEPARATOR STRING_LITERAL)? ')'
	;

scalar_function_name:
	function_name_base
	| CURDATE | CURRENT_DATE | CURRENT_TIME | CURRENT_TIMESTAMP | CURTIME | DATE_ADD | DATE_SUB 
	| IF | LOCALTIME | LOCALTIMESTAMP | MID | NOW | REPLACE | SUBSTR | SUBSTRING 
	| SYSDATE | UTC_DATE | UTC_TIME | UTC_TIMESTAMP
	// | func_proc_name // Is it necessary define variable name of function?
	;

//---------------------------
// Common Compound Expressons
//---------------------------

// It is possible - this error becouse non-direct left recursion!
// TODO: make without non-direct left recursion
subquery:
	select_statement;


//------------------
// Common Primitives
//------------------

mysql_variable:
	LOCAL_ID
	| GLOBAL_ID
	;

if_exists:
	IF EXISTS;

if_not_exists:
	IF NOT EXISTS;

unary_operator:
	'!' | '~' | '+' | '-' | NOT // !!GREATER_POWER!!
	;

comparison_operator:
	'=' | '>' | '<' | '<' '=' | '>' '=' | '<' '>' | '!' '=' | '<' '=' '>'
	;

logical_operator:
	AND | '&' '&' | XOR | OR | '|' '|'
	;

bit_operator:
	'<' '<' | '>' '>' | '&' | '^' | '|'
	;

math_operator:
	'*' | '/' | '%' | DIV | MOD | '+' | '-'
	;


charset_name:
	BINARY
	| charset_name_base
	| STRING_LITERAL // TODO: for currency match 'utf8', 'latin1', etc need alter Lexer
	| CHARSET_REVERSE_QOUTE_STRING
	;


data_type:
	BIT length_one_dimension?
	| int_data_type length_one_dimension? UNSIGNED? ZEROFILL?
	| real_numeric_data_type length_two_dimension? UNSIGNED? ZEROFILL?
	| dot_numeric_data_type  length_two_optional_dimension? UNSIGNED? ZEROFILL?
	| DATE
	| datetime_data_type length_one_dimension?
	| YEAR
	| char_data_type length_one_dimension? BINARY? (CHARACTER SET charset_name)? (COLLATE collation_name)?
	| BINARY length_one_dimension?
	| VARBINARY length_one_dimension?
	| TINYBLOB
	| BLOB
	| MEDIUMBLOB
	| LONGBLOB
	| text_data_type  BINARY? (CHARACTER SET charset_name)? (COLLATE collation_name)?
	| text_composite_data_type '(' STRING_LITERAL (',' STRING_LITERAL)* ')' BINARY? (CHARACTER SET charset_name)? (COLLATE collation_name)?
	| spatial_data_type
	;

data_type_to_convert:
	(BINARY| NCHAR) length_one_dimension?
	| CHAR length_one_dimension? (CHARACTER SET charset_name)?
	| DATE | DATETIME | TIME
	| DECIMAL length_two_dimension?
	| (SIGNED | UNSIGNED) INTEGER?
	;

int_data_type:
	TINYINT | SMALLINT | MEDIUMINT | INT | INTEGER | BIGINT
	;

real_numeric_data_type:
	REAL | DOUBLE | FLOAT
	;

dot_numeric_data_type:
	DECIMAL | NUMERIC
	;

datetime_data_type:
	TIME | TIMESTAMP | DATETIME
	;

char_data_type:
	CHAR | VARCHAR
	;

text_data_type:
	TINYTEXT | TEXT | MEDIUMTEXT | LONGTEXT
	;

text_composite_data_type:
	ENUM | SET
	;

spatial_data_type:
	GEOMETRYCOLLECTION | LINESTRING | MULTILINESTRING | MULTIPOINT | MULTIPOLYGON | POINT | POLYGON
	;

engine_name:
	ARCHIVE | BLACKHOLE | CSV | FEDERATED | INNODB | MEMORY | MRG_MYISAM | MYISAM | NDB | NDBCLUSTER | PERFOMANCE_SCHEMA
	;

length_one_dimension:
	'(' decimal_literal ')'
	;

length_two_dimension:
	'(' decimal_literal ',' decimal_literal ')'
	;

length_two_optional_dimension:
	'(' decimal_literal (',' decimal_literal)? ')'
	;


grant_permission:
	CREATE (TEMPORARY TABLES | ROUTINE | VIEW | USER | TABLESPACE)?
	| ALTER ROUTINE?
	| SHOW (VIEW | DATABASES)
	| DROP | GRANT OPTION | LOCK TABLES | REFERENCES | EVENT 
	| ALTER | DELETE | INDEX | INSERT | SELECT | UPDATE
	| TRIGGER | EXECUTE | FILE | PROCESS | PROXY 
	| RELOAD | REPLICATION CLIENT | REPLICATION SLAVE
	| SHUTDOWN | SUPER | ALL PRIVILEGES? | USAGE
	;

transaction_level:
	REPEATABLE READ
	| READ COMMITTED
	| READ UNCOMMITTED
	| SERIALIZABLE
	;

//------------------------
// Expressions, predicates
//------------------------

function_args:
	(constant | full_column_name | function_call | null_notnull | expression) (',' (constant | full_column_name | function_call | null_notnull | expression) )*
	;

function_arg:
	constant | full_column_name | function_call | null_notnull | expression
	;

expression_list:
	expression (',' expression)*
	;


// TSQL approach
// ********************************************************
/*
search_condition
    : search_condition_and (OR search_condition_and)*
    ;

search_condition_and
    : search_condition_not (AND search_condition_not)*
    ;

search_condition_not
    : NOT? predicate
    ;

predicate
    : EXISTS '(' subquery ')'
    | expression comparison_operator expression
    | expression comparison_operator (ALL | SOME | ANY) '(' subquery ')'
    | expression NOT? BETWEEN expression AND expression
    | expression NOT? IN '(' (subquery | expression_list) ')'
    | expression NOT? LIKE expression (ESCAPE expression)?
    | expression NOT? (REGEXP|RLIKE) expression
    | expression IS null_notnull
    | '(' search_condition ')'
  	| expression
    ;

expression:
	DEFAULT
	| null_notnull
	| constant
	| full_column_name
	| function_call
	| mysql_variable
	| unary_operator expression
	| BINARY expression
	| '(' expression ')'
	| '(' subquery ')'
	| expression bit_operator expression
	| expression math_operator expression
	| expression comparison_operator expression
	| INTERVAL expression interval_type
	;
*/
// ********************************************************

// Simple MySQL approach
// ********************************************************

search_condition:
	expression
	;

expression:
	(NOT | '!') expression
	| expression logical_operator expression
	| predicate IS NOT? (TRUE | FALSE | UNKNOWN)
	| predicate 
	;

predicate:
	predicate NOT? IN '(' (subquery | expression_list) ')'
	| predicate IS null_notnull
	| predicate comparison_operator predicate
	| predicate comparison_operator (ALL | ANY | SOME) '(' subquery ')'
	| predicate NOT? BETWEEN predicate AND predicate
	| predicate SOUNDS LIKE predicate // TODO: check correctness
	| predicate NOT? LIKE predicate (ESCAPE string_literal)? // TODO: check correctness
	| predicate NOT? (REGEXP|RLIKE) predicate // TODO: check correctness
	| expression_atom
	;


expression_atom:
	DEFAULT
	| null_notnull
	| constant
	| full_column_name
	| function_call
	| mysql_variable
	| unary_operator expression_atom
	| BINARY expression_atom
	| '(' expression ')'
	| EXISTS? '(' subquery ')'
	| INTERVAL expression interval_type
	| expression_atom bit_operator expression_atom
	| expression_atom math_operator expression_atom
	;

// ********************************************************

// Correct MySQL approach, but not worked in Python
// ********************************************************
/*
expression:
	(NOT | '!') expression
	| expression logical_operator expression
	| boolean_primary IS NOT? (TRUE | FALSE | UNKNOWN)
	| boolean_primary 
	;

boolean_primary:
	boolean_primary IS null_notnull
	| boolean_primary comparison_operator predicate
	| boolean_primary comparison_operator (ALL | ANY | SOME) '(' subquery ')'
	| predicate
	;

predicate:
	bit_expression NOT? IN '(' (subquery | expression_list) ')'
	| bit_expression NOT? BETWEEN bit_expression AND predicate
	| bit_expression SOUNDS LIKE bit_expression // TODO: check correctness
	| bit_expression NOT? LIKE expression_atom (ESCAPE string_literal)? // TODO: check correctness
	| bit_expression NOT? (REGEXP|RLIKE) bit_expression // TODO: check correctness
	| bit_expression
	;

bit_expression:
	expression_atom bit_operator expression_atom
	| expression_atom math_operator expression_atom
	| expression_atom
	;

expression_atom:
	DEFAULT
	| null_notnull
	| constant
	| full_column_name
	| function_call
	| mysql_variable
	| unary_operator expression_atom
	| BINARY expression_atom
	| '(' expression ')'
	| EXISTS? '(' subquery ')'
	| INTERVAL expression interval_type
	;

*/
// ********************************************************


/*
// TODO.
// This type of expression_atom must be considered:
	| expression_atom COLLATE collation_name
	| param_marker
	| expression_atom '|' '|' expression_atom
	| {identifier expression}
	| match_expr
*/

//---------------
// Simple id sets
// that keyword, which can be id
//---------------
charset_name_base:
	ARMSCII8 | ASCII | BIG5 | CP1250 | CP1251 | CP1256 | CP1257 | CP850 
	| CP852 | CP866 | CP932 | DEC8 | EUCJPMS | EUCKR | GB2312 | GBK | GEOSTD8 
	| GREEK | HEBREW | HP8 | KEYBCS2 | KOI8R | KOI8U | LATIN1 | LATIN2 | LATIN5 
	| LATIN7 | MACCE | MACROMAN | SJIS | SWE7 | TIS620 | UCS2 | UJIS | UTF16 
	| UTF16LE | UTF32 | UTF8 | UTF8MB3 | UTF8MB4
	;

transaction_level_base:
	REPEATABLE | COMMITTED | UNCOMMITTED | SERIALIZABLE
	;

privileges_base:
	TABLES | ROUTINE | EXECUTE | FILE | PROCESS | RELOAD | SHUTDOWN | SUPER | PRIVILEGES
	;

interval_type_base:
	QUARTER | MONTH | DAY | HOUR | MINUTE | WEEK | SECOND | MICROSECOND
	;

data_type_base:
	DATE | TIME | TIMESTAMP | DATETIME | YEAR | ENUM | TEXT
	;
 
keywords_can_be_id:
	ACTION | AFTER | ALGORITHM | ANY | AT | AUTHORS | AUTOCOMMIT | AUTOEXTEND_SIZE 
	| AUTO_INCREMENT | AVG_ROW_LENGTH | BEGIN | BINLOG | BIT | BTREE | CASCADED 
	| CHAIN | CHECKSUM | CIPHER | CLIENT | COALESCE | CODE | COLUMNS | COLUMN_FORMAT 
	| COMMENT | COMMIT | COMPACT | COMPLETION | COMPRESSED | CONCURRENT 
	| CONNECTION | CONSISTENT | CONTAINS | CONTRIBUTORS | COPY | DATA | DATAFILE 
	| DEFINER | DELAY_KEY_WRITE | DIRECTORY | DISABLE | DISCARD | DISK | DO | DUMPFILE
	| DUPLICATE | DYNAMIC | ENABLE | ENDS | ENGINE | ENGINES | ERRORS | ESCAPE | EVEN | EVENT 
	| EVENTS | EVERY | EXCHANGE | EXCLUSIVE | EXPIRE | EXTENT_SIZE | FIELDS | FIRST 
	| FIXED | FULL | FUNCTION | GLOBAL | GRANTS | HASH | HOST | IDENTIFIED | IMPORT 
	| INITIAL_SIZE | INPLACE | INSERT_METHOD | INVOKER | ISOLATION | ISSUER 
	| KEY_BLOCK_SIZE | LANGUAGE | LAST | LESS | LEVEL | LIST | LOCAL | LOGS 
	| LOGFILE | MASTER | MAX_CONNECTIONS_PER_HOUR | MAX_QUERIES_PER_HOUR | MAX_ROWS 
	| MAX_SIZE | MAX_UPDATES_PER_HOUR | MAX_USER_CONNECTIONS | MEMORY | MERGE | MID 
	| MIN_ROWS | MUTEX | SHARE | MODIFY | MYSQL | NAME | NAMES | NCHAR | NO | NODEGROUP 
	| NONE | OFFLINE | OFFSET | OJ | OLD_PASSWORD | ONLINE | ONLY | OPTIONS | OWNER 
	| PACK_KEYS | PARSER | PARTIAL | PARTITIONING | PARTITIONS | PASSWORD | PLUGINS 
	| PORT | PRESERVE | PROCESSLIST | PROFILE | PROFILES | PROXY | QUERY | QUICK 
	| REBUILD | REDO_BUFFER_SIZE | REDUNDANT | RELAYLOG | REMOVE | REORGANIZE 
	| REPAIR | REPLICATION | RETURNS | ROLLBACK | ROW | ROWS | ROW_FORMAT 
	| SAVEPOINT | SCHEDULE | SECURITY | SERVER | SESSION | SHARE | SHARED | SIGNED 
	| SIMPLE | SLAVE | SNAPSHOT | SOCKET | SOME | SOUNDS | SQL_BUFFER_RESULT | SQL_CACHE 
	| SQL_NO_CACHE | START | STARTS | STATS_AUTO_RECALC | STATS_PERSISTENT 
	| STATS_SAMPLE_PAGES | STATUS | STORAGE | SUBJECT | SUBPARTITION | SUBPARTITIONS 
	| TABLESPACE | TEMPORARY | TEMPTABLE | THAN | TRANSACTION | TRUNCATE 
	| UNDEFINED | UNDOFILE | UNDO_BUFFER_SIZE | UNKNOWN | UPGRADE | USER | VALUE | VARIABLES 
	| VIEW | WAIT | WARNINGS | WORK | WRAPPER | X509 | XML
	;


function_name_base:
	ABS | ACOS | ADDDATE | ADDTIME | AES_DECRYPT | AES_ENCRYPT | AREA | ASBINARY 
	| ASIN | ASTEXT | ASWKB | ASWKT | ASYMMETRIC_DECRYPT | ASYMMETRIC_DERIVE 
	| ASYMMETRIC_ENCRYPT | ASYMMETRIC_SIGN | ASYMMETRIC_VERIFY | ATAN | ATAN2 
	| BENCHMARK | BIN | BIT_COUNT | BIT_LENGTH | BUFFER | CEIL | CEILING | CENTROID 
	| CHARACTER_LENGTH | CHARSET | CHAR_LENGTH | COERCIBILITY | COLLATION | COMPRESS 
	| CONCAT | CONCAT_WS | CONNECTION_ID | CONV | CONVERT_TZ | COS | COT | COUNT | CRC32 
	| CREATE_ASYMMETRIC_PRIV_KEY | CREATE_ASYMMETRIC_PUB_KEY | CREATE_DH_PARAMETERS 
	| CREATE_DIGEST | CROSSES | DATE | DATEDIFF | DATE_FORMAT | DAY | DAYNAME | DAYOFMONTH 
	| DAYOFWEEK | DAYOFYEAR | DECODE | DEGREES | DES_DECRYPT | DES_ENCRYPT | DIMENSION 
	| DISJOINT | ELT | ENCODE | ENCRYPT | ENDPOINT | ENVELOPE | EQUALS | EXP 
	| EXPORT_SET | EXTERIORRING | EXTRACTVALUE | FIELD | FIND_IN_SET | FLOOR | FORMAT 
	| FOUND_ROWS | FROM_BASE64 | FROM_DAYS | FROM_UNIXTIME | GEOMCOLLFROMTEXT 
	| GEOMCOLLFROMWKB | GEOMETRYCOLLECTION | GEOMETRYCOLLECTIONFROMTEXT 
	| GEOMETRYCOLLECTIONFROMWKB | GEOMETRYFROMTEXT | GEOMETRYFROMWKB | GEOMETRYN 
	| GEOMETRYTYPE | GEOMFROMTEXT | GEOMFROMWKB | GET_FORMAT | GET_LOCK | GLENGTH 
	| GREATEST | GTID_SUBSET | GTID_SUBTRACT | HEX | HOUR | IFNULL | INET6_ATON | INET6_NTOA 
	| INET_ATON | INET_NTOA | INSTR | INTERIORRINGN | INTERSECTS | ISCLOSED | ISEMPTY 
	| ISNULL | ISSIMPLE | IS_FREE_LOCK | IS_IPV4 | IS_IPV4_COMPAT | IS_IPV4_MAPPED 
	| IS_IPV6 | IS_USED_LOCK | LAST_INSERT_ID | LCASE | LEAST | LEFT | LENGTH | LINEFROMTEXT 
	| LINEFROMWKB | LINESTRING | LINESTRINGFROMTEXT | LINESTRINGFROMWKB | LN | LOAD_FILE 
	| LOCATE | LOG | LOG10 | LOG2 | LOWER | LPAD | LTRIM | MAKEDATE | MAKETIME | MAKE_SET 
	| MASTER_POS_WAIT | MBRCONTAINS | MBRDISJOINT | MBREQUAL | MBRINTERSECTS | MBROVERLAPS 
	| MBRTOUCHES | MBRWITHIN | MD5 | MICROSECOND | MINUTE | MLINEFROMTEXT | MLINEFROMWKB 
	| MONTH | MONTHNAME | MPOINTFROMTEXT | MPOINTFROMWKB | MPOLYFROMTEXT | MPOLYFROMWKB | MULTILINESTRING 
	| MULTILINESTRINGFROMTEXT | MULTILINESTRINGFROMWKB | MULTIPOINT | MULTIPOINTFROMTEXT 
	| MULTIPOINTFROMWKB | MULTIPOLYGON | MULTIPOLYGONFROMTEXT | MULTIPOLYGONFROMWKB 
	| NAME_CONST | NULLIF | NUMGEOMETRIES | NUMINTERIORRINGS | NUMPOINTS | OCT | OCTET_LENGTH 
	| ORD | OVERLAPS | PERIOD_ADD | PERIOD_DIFF | PI | POINT | POINTFROMTEXT | POINTFROMWKB 
	| POINTN | POLYFROMTEXT | POLYFROMWKB | POLYGON | POLYGONFROMTEXT | POLYGONFROMWKB | POSITION
	| POW | POWER | QUARTER | QUOTE | RADIANS | RAND | RANDOM_BYTES | RELEASE_LOCK 
	| REVERSE | RIGHT | ROUND | ROW_COUNT | RPAD | RTRIM | SECOND | SEC_TO_TIME | SESSION_USER | SHA | SHA1 
	| SHA2 | SIGN | SIN | SLEEP | SOUNDEX | SQL_THREAD_WAIT_AFTER_GTIDS | SQRT | SRID 
	| STARTPOINT | STRCMP | STR_TO_DATE | ST_AREA | ST_ASBINARY | ST_ASTEXT | ST_ASWKB 
	| ST_ASWKT | ST_BUFFER | ST_CENTROID | ST_CONTAINS | ST_CROSSES | ST_DIFFERENCE 
	| ST_DIMENSION | ST_DISJOINT | ST_DISTANCE | ST_ENDPOINT | ST_ENVELOPE | ST_EQUALS 
	| ST_EXTERIORRING | ST_GEOMCOLLFROMTEXT | ST_GEOMCOLLFROMTXT | ST_GEOMCOLLFROMWKB 
	| ST_GEOMETRYCOLLECTIONFROMTEXT | ST_GEOMETRYCOLLECTIONFROMWKB | ST_GEOMETRYFROMTEXT 
	| ST_GEOMETRYFROMWKB | ST_GEOMETRYN | ST_GEOMETRYTYPE | ST_GEOMFROMTEXT | ST_GEOMFROMWKB 
	| ST_INTERIORRINGN | ST_INTERSECTION | ST_INTERSECTS | ST_ISCLOSED | ST_ISEMPTY | ST_ISSIMPLE 
	| ST_LINEFROMTEXT | ST_LINEFROMWKB | ST_LINESTRINGFROMTEXT | ST_LINESTRINGFROMWKB 
	| ST_NUMGEOMETRIES | ST_NUMINTERIORRING | ST_NUMINTERIORRINGS | ST_NUMPOINTS | ST_OVERLAPS 
	| ST_POINTFROMTEXT | ST_POINTFROMWKB | ST_POINTN | ST_POLYFROMTEXT | ST_POLYFROMWKB 
	| ST_POLYGONFROMTEXT | ST_POLYGONFROMWKB | ST_SRID | ST_STARTPOINT | ST_SYMDIFFERENCE 
	| ST_TOUCHES | ST_UNION | ST_WITHIN | ST_X | ST_Y | SUBDATE | SUBSTRING_INDEX | SUBTIME 
	| SYSTEM_USER | TAN | TIME | TIMEDIFF | TIMESTAMP | TIMESTAMPADD | TIMESTAMPDIFF | TIME_FORMAT 
	| TIME_TO_SEC | TOUCHES | TO_BASE64 | TO_DAYS | TO_SECONDS | UCASE | UNCOMPRESS | UNCOMPRESSED_LENGTH 
	| UNHEX | UNIX_TIMESTAMP | UPDATEXML | UPPER | UUID | UUID_SHORT | VALIDATE_PASSWORD_STRENGTH 
	| VERSION | WAIT_UNTIL_SQL_THREAD_AFTER_GTIDS | WEEK | WEEKDAY | WEEKOFYEAR | WEIGHT_STRING 
	| WITHIN | YEAR | YEARWEEK | Y_FUNCTION | X_FUNCTION
	;

//--------------
// ID, Simple ID
//--------------

dot_ext_id:
	DOT_ID
	| '.' id_
	;

id_:
	simple_id
	//| DOUBLE_QUOTE_ID
	| REVERSE_QUOTE_ID
	| CHARSET_REVERSE_QOUTE_STRING
	;
	
simple_id:
	ID
	| charset_name_base
	| transaction_level_base
	| engine_name
	| privileges_base
	| interval_type_base
	| data_type_base
	| keywords_can_be_id
	| function_name_base
	| spatial_data_type
	;

//--------------
// Literals
//--------------
decimal_literal:
	DECIMAL_LITERAL | ZERO | ONE | TWO
	;

filesize_literal:
	FILESIZE_LITERAL | decimal_literal;

constant:
	string_literal | hexadecimal_literal | decimal_literal | REAL_LITERAL | boolean_literal | BIT_STRING
	;

string_literal:
	(STRING_CHARSET_NAME? STRING_LITERAL | START_NATIONAL_STRING_LITERAL) STRING_LITERAL+
	| (STRING_CHARSET_NAME? STRING_LITERAL | START_NATIONAL_STRING_LITERAL) (COLLATE collation_name)?
	;

boolean_literal:
	TRUE | FALSE;

hexadecimal_literal:
	STRING_CHARSET_NAME? HEXADECIMAL_LITERAL;
// TODO: define "is it nessasary define Collate as literal"


null_notnull:
	NOT? (NULL_LITERAL | NULL_SPEC_LITERAL)
	;