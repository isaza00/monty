#include "monty.h"

int *read_line(FILE *monty_file)
{
	char data[1024];
	char *command = NULL;
	char *param = NULL;

	if (fgets(data, 1024, monty_file))
	{
		command = strtok(data, SEPARATORS);
		if (!command)
			return (1);
		if (strcmp(command, "push") == 0)
			param = strtok(NULL, SEPARATORS);
		return (1);
	}
	return (0);
}