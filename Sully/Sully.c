#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
	char *s[] = {
		"Sully_X.c",
		"clang -Wall -Wextra -Werror Sully_X.c -o Sully ; ./Sully",
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
		"	char c = (char)(i - 1 + '0');",
		"",
		"	if (i > 0)",
		"	{",
		"		char	*name = strdup(s[0]);",
		"		char	*cmd = strdup(s[1]);",
		"		name[6] = c;",
		"		cmd[34] = c;",
		"",
		"		FILE * fp = fopen(name, s[2]);",
		"		for (int i = 5 ; i < 46 ; i++)",
		"		{",
		"			if (i == 12)",
		"			{",
		"				for (int i = 0 ; i < 46 ; i++)",
		"					fprintf(fp, s[4], 34, s[i], 34, 10);",
		"				fprintf(fp, s[3], s[i], 10);",
		"			}",
		"			else if (i == 14)",
		"				fprintf(fp, s[i], c, 10);",
		"			else",
		"				fprintf(fp, s[3], s[i], 10);",
		"		}",
		"		fclose(fp);",
		"",
		"		system(cmd);",
		"		free(cmd);",
		"		free(name);",
		"	}",
		"	return (0);",
		"}",
	};

	int i = 5;
	char c = (char)(i - 1 + '0');

	if (i > 0)
	{
		char	*name = strdup(s[0]);
		char	*cmd = strdup(s[1]);
		name[6] = c;
		cmd[34] = c;

		FILE * fp = fopen(name, s[2]);
		for (int i = 5 ; i < 46 ; i++)
		{
			if (i == 12)
			{
				for (int i = 0 ; i < 46 ; i++)
					fprintf(fp, s[4], 34, s[i], 34, 10);
				fprintf(fp, s[3], s[i], 10);
			}
			else if (i == 14)
				fprintf(fp, s[i], c, 10);
			else
				fprintf(fp, s[3], s[i], 10);
		}
		fclose(fp);

		system(cmd);
		free(cmd);
		free(name);
	}
	return (0);
}
