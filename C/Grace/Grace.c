#include <stdio.h>

/*
	This is a comment !
*/

#define START "#include <stdio.h>%c%c/*%c	This is a comment !%c*/%c%c#define START %c%s%c%c#define END %c%s%c%c#define FT(x) int main() { FILE *fp = fopen(%cGrace_kid.c%c, %cw+%c); "
#define END "fprintf(fp,START,10,10,10,10,10,10,34,START,34,10,34,END,34,10,34,34,34,34); fprintf(fp,END,10,10,10); fclose(fp); return(0); }%c%cFT()%c"
#define FT(x) int main() { FILE *fp = fopen("Grace_kid.c", "w+"); fprintf(fp,START,10,10,10,10,10,10,34,START,34,10,34,END,34,10,34,34,34,34); fprintf(fp,END,10,10,10); fclose(fp); return(0); }

FT()
