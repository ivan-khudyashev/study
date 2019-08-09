rem (@dir & echo %CD%) | type file1.txt
set pre=@
%pre%type file1.txt && (
@dir 
echo %CD%) 
