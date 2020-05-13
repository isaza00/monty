#include "monty.h"
void monty_function(char *operator, stack_t **node, unsigned int count_lines)
{
	size_t i;

	instruction_t valid_com[] = {
		{"push", m_push},
		{"pall", m_pall},
		{"pint", m_pint},
		{"pop", m_pop},
		{"swap", m_swap},
		/*{"add", m_add},
		{"pop", m_pop},
		/*{"swap", m_swap},
		{"add", m_add},
		{"add", m_add},
		{"sub", m_sub},
		{"div", m_div},
		{"mod", m_mod},
		{"#", m_hash},
		{"pchar", m_pchar},
		{"pstr", m_pstr},*/
		{"nop", m_nop},
		{NULL, NULL}
	};
	for (i = 0; valid_com[i].opcode; i++)
	{
		if(strcmp(valid_com[i].opcode, operator) == 0)
		{
			valid_com[i].f(node, count_lines);

		}
	}
}