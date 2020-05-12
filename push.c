#include "monty.h"

int check_digit(unsigned int line_count)
{
	int num;
	num = atoi(param);

	if (num == 0 && strcmp(param, "0") != 0)
	{
		dprintf(2, "L%u: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}
	return (num);
	/*for (i = 0; param[i]; i++)*/
	
		/*if (param[i] == '-' && i == 0)
	}*/
}
void m_push(stack_t **node, unsigned int line_count)
{
	int num;

	if (!param)
	{
		dprintf(2, "L%u: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}
	num = check_digit(line_count);
	printf("num %i\n", num);
	if (!add_node(node, num))
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}