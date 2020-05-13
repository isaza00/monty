#include "monty.h"

/**
 * m_pint - pint is print stack backwards
 * @node: pointer to head
 * @line_count: current line number
 * Return: void function
 */
void m_pint(stack_t **node, unsigned int line_count)
{
        if (!*node || !node)
	{
		dprintf(2, "L%u: usage: can't pint, stack empty\n", line_count);
		free_all(node);
		exit(EXIT_FAILURE);
	}

        printf("printing pint: \n");
        printf("%d\n", (*node)->n);	
}