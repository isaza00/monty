#include "monty.h"

global_t global = {NULL, NULL}; 

/**
 * main - monty interpreter
 * @argc: number of agruments
 * @argv: name of file in argv[1]
 * Return: return success if interpreter worked
 */
int main(int argc, char *argv[])
{
	FILE *monty_file;
	/*int line = 1;*/
	unsigned int count_lines = 0;
	char *operator = NULL;
	size_t size = 0;
	stack_t *node = NULL;

	global.global_free = &node;
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		free_all();
		exit(EXIT_FAILURE);
	}
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		free_all();
		exit(EXIT_FAILURE);
	}
	while (getline(&(global.dataptr), &size, monty_file) != -1)
	{
		count_lines++;
		operator = strtok(global.dataptr, SEPARATORS);
		if (operator != NULL)
			monty_function(operator, &node, count_lines);
	}
	pclose(monty_file);
	if (global.dataptr)
		free(global.dataptr);
	free_all();
	return (0);
}
