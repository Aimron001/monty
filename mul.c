#include "monty.h"
/**
 * _mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @count: line count
 * Return: void
*/
void _mul(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.line_content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	ax = tmp->next->n * tmp->n;
	tmp->next->n = ax;
	*head = tmp->next;
	free(tmp);
}
