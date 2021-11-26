#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
	char *s[] = {
		"Sully_5.c",
		"Sully_X.c",
		"clang -Wall -Wextra -Werror Sully_X.c -o Sully_X",
		"./Sully_X",
		"w+",
		"%s%c",
		"		%c%s%c,%c",
		"#include <stdlib.h>",
		"#include <unistd.h>",
		"#include <stdio.h>",
		"#include <string.h>",
		"",
		"int main (void)",
		"{",
		"	char *s[] = {",
		"	};",
		"",
		"	int i = %c;%c",
		"	if (access(s[0], F_OK) == 0)",
		"		i--;",
		"	char c = (char)(i + '0');",
		"	char	*name = strdup(s[1]);",
		"	name[6] = c;",
		"",
		"	FILE * fp = fopen(name, s[4]);",
		"	for (int j = 7 ; j < 57 ; j++)",
		"	{",
		"		if (j == 15)",
		"		{",
		"			for (int j = 0 ; j < 57 ; j++)",
		"				fprintf(fp, s[6], 34, s[j], 34, 10);",
		"			fprintf(fp, s[5], s[j], 10);",
		"		}",
		"		else if (j == 17)",
		"			fprintf(fp, s[j], c, 10);",
		"		else",
		"			fprintf(fp, s[5], s[j], 10);",
		"	}",
		"	fclose(fp);",
		"	free(name);",
		"",
		"	char	*cmd = strdup(s[2]);",
		"	cmd[34] = c;",
		"	cmd[47] = c;",
		"",
		"	system(cmd);",
		"	free(cmd);",
		"",
		"	cmd = strdup(s[3]);",
		"	cmd[8] = c;",
		"",
		"	if (i > 0)",
		"		system(cmd);",
		"	free(cmd);",
		"",
		"	return (0);",
		"}",
	};

	int i = 5;
	if (access(s[0], F_OK) == 0)
		i--;
	char c = (char)(i + '0');
	char	*name = strdup(s[1]);
	name[6] = c;

	FILE * fp = fopen(name, s[4]);
	for (int j = 7 ; j < 57 ; j++)
	{
		if (j == 15)
		{
			for (int j = 0 ; j < 57 ; j++)
				fprintf(fp, s[6], 34, s[j], 34, 10);
			fprintf(fp, s[5], s[j], 10);
		}
		else if (j == 17)
			fprintf(fp, s[j], c, 10);
		else
			fprintf(fp, s[5], s[j], 10);
	}
	fclose(fp);
	free(name);

	char	*cmd = strdup(s[2]);
	cmd[34] = c;
	cmd[47] = c;

	system(cmd);
	free(cmd);

	cmd = strdup(s[3]);
	cmd[8] = c;

	if (i > 0)
		system(cmd);
	free(cmd);

	return (0);
}
