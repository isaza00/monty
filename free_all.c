#include "monty.h"
/**
 * m_pint - pint is print stack backwards
 * @node: pointer to head
 * @line_count: current line number
 * Return: void function
 */
void free_all(stack_t **node)
{
	stack_t *temp = NULL;
	stack_t *node_free;

	node_free = *node;

	while (node_free)
	{
		temp = node_free->next;
		free(node_free);
		node_free = temp;
	}
}

