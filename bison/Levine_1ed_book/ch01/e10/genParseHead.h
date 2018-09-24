#ifndef _LEX_YY_H_
#define _LEX_YY_H_
typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern int yyparse();
extern YY_BUFFER_STATE yy_scan_string(char *);
extern void yy_delete_buffer(YY_BUFFER_STATE buffer);
int tokenCounter(char*);
#endif

