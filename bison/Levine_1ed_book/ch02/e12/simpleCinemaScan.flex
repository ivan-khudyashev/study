%option noyywrap nodefault
%{
#include <stdio.h>
#include "cinemaList.tab.h"
%}
%%
"Aria Stark" {return ARIASTARK;}
"Gregory House" {return GREGHOUSE;}
"Yoda" {return YODA;}
"Dayeneris Targarian" {return DANYTARGARIAN;}
"Ellen Ripley" {return ELLENRIPLEY;}
[ \t\n\r]+  {}
.           {}
