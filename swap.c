#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack.
 * @head: stack head
 * @count: line count
 * Return: void
*/
void _swap(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	int size = 0, ax;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	ax = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = ax;
}
