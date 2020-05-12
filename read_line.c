#include "monty.h"
void read_line(char *monty_file)
{
	char *buffer;
	size_t size = 0;

	getline(&buffer, &size, monty_file);
	printf("%s", getline(&buffer, &size, monty_file));
}