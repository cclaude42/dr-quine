#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
	char *s[] = {
		"Sully_X.c",
		"clang -Wall -Wextra -Werror Sully_X.c -o Sully_X ; ./Sully_X",
		"w+",
		"%s%c",
		"		%c%s%c,%c",
		"#include <stdlib.h>",
		"#include <stdio.h>",
		"#include <string.h>",
		"",
		"int main (void)",
		"{",
		"	char *s[] = {",
		"	};",
		"",
		"	int i = %c;%c",
		"	char c = (char)(i + '0');",
		"	char	*name = strdup(s[0]);",
		"	name[6] = c;",
		"",
		"	FILE * fp = fopen(name, s[2]);",
		"	for (int i = 5 ; i < 48 ; i++)",
		"	{",
		"		if (i == 12)",
		"		{",
		"			for (int i = 0 ; i < 48 ; i++)",
		"				fprintf(fp, s[4], 34, s[i], 34, 10);",
		"			fprintf(fp, s[3], s[i], 10);",
		"		}",
		"		else if (i == 14)",
		"			fprintf(fp, s[i], c - 1, 10);",
		"		else",
		"			fprintf(fp, s[3], s[i], 10);",
		"	}",
		"	fclose(fp);",
		"	free(name);",
		"",
		"	if (i > 0)",
		"	{",
		"		char	*cmd = strdup(s[1]);",
		"		cmd[34] = c;",
		"		cmd[47] = c;",
		"		cmd[59] = c;",
		"",
		"		system(cmd);",
		"		free(cmd);",
		"	}",
		"	return (0);",
		"}",
	};

	int i = 5;
	char c = (char)(i + '0');
	char	*name = strdup(s[0]);
	name[6] = c;

	FILE * fp = fopen(name, s[2]);
	for (int i = 5 ; i < 48 ; i++)
	{
		if (i == 12)
		{
			for (int i = 0 ; i < 48 ; i++)
				fprintf(fp, s[4], 34, s[i], 34, 10);
			fprintf(fp, s[3], s[i], 10);
		}
		else if (i == 14)
			fprintf(fp, s[i], c - 1, 10);
		else
			fprintf(fp, s[3], s[i], 10);
	}
	fclose(fp);
	free(name);

	if (i > 0)
	{
		char	*cmd = strdup(s[1]);
		cmd[34] = c;
		cmd[47] = c;
		cmd[59] = c;

		system(cmd);
		free(cmd);
	}
	return (0);
}
