#include "monty.h"
/**
 * m_add - adds the top and the second element of the stack
 * @head: pointer to head
 * @count_lines: current line number
 * Return: void function
 */
void m_add(stack_t **head, unsigned int line_count)
{
	stack_t *temp;
	int sum;

	if (!head || !(*head) || !(*head)->next)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp = *head;

	sum = temp->n + temp->next->n;
	m_pop(head, line_count);
	m_pop(head, line_count);
	add_node(head, sum);
}
