#include <stdio.h>

# define NL 10
# define QT 34

/*
	This is the function called !
*/

void replicator (void)
{
	char *s[] = {
		"%s%c",
		"		%c%s%c,%c",
		"#include <stdio.h>",
		"",
		"# define NL 10",
		"# define QT 34",
		"",
		"/*",
		"	This is the function called !",
		"*/",
		"",
		"void replicator (void)",
		"{",
		"	char *s[] = {",
		"	};",
		"",
		"	for (int i = 2 ; i < 14 ; i++)",
		"		printf(s[0], s[i], NL);",
		"	for (int i = 0 ; i < 31 ; i++)",
		"		printf(s[1], QT, s[i], QT, NL);",
		"	for (int i = 14 ; i < 31 ; i++)",
		"		printf(s[0], s[i], NL);",
		"}",
		"",
		"int main (void)",
		"{",
		"	/*",
		"		And this is the main calling it !",
		"	*/",
		"	replicator();",
		"}",
	};

	for (int i = 2 ; i < 14 ; i++)
		printf(s[0], s[i], NL);
	for (int i = 0 ; i < 31 ; i++)
		printf(s[1], QT, s[i], QT, NL);
	for (int i = 14 ; i < 31 ; i++)
		printf(s[0], s[i], NL);
}

int main (void)
{
	/*
		And this is the main calling it !
	*/
	replicator();
}
