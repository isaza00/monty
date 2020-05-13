#include "monty.h"


/**
 * print_dlistint - print double linked list
 * @h: pointer to hed
 * Return: number of nodes
 */

int main(int argc, char *argv[])
{
	FILE *monty_file;
	int line = 1;
	unsigned int count_lines = 0;
	stack_t *node = NULL;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		free_all(&node);
		exit(EXIT_FAILURE);
	}
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		free_all(&node);
		exit(EXIT_FAILURE);
	}
	while (line == 1)
	{
		count_lines++;
		line = read_line(monty_file);
		if (!command)
			break;
		printf("line number: %i\n", count_lines);
		/*printf("command = %s and param = %s\n", command, param);*/
		monty_function(&node, count_lines);
		printf("lista :\n");
		print(node);
	}
	pclose(monty_file);
	free_all(&node);
	return (0);
}
