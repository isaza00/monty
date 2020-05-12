#include "monty.h"

char *command = NULL;
char *param = NULL;
int count_lines = 0;

int main(int argc, char *argv[])
{
	FILE *monty_file;
	int line = 1;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	monty_file = fopen(argv[1], "r");
	if (monty_file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line == 1)
	{
		line = read_line(monty_file);
		printf("command = %s and param = %s\n", command, param); 
		monty_function();
		count_lines++;
	}
	

	
	
	pclose(monty_file);
	return (0);
}
