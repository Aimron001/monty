#include "monty.h"
/**
  *_sub-  subtracts the top element from the second top element of the stack
  *@head: stack head
  *@count: line count
  *Return: void
 */
void _sub(stack_t **head, unsigned int count)
{
	stack_t *ax;
	int val, n;

	ax = *head;
	for (n = 0; ax != NULL; n++)
		ax = ax->next;
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.line_content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	ax = *head;
	val = ax->next->n - ax->n;
	ax->next->n = val;
	*head = ax->next;
	free(ax);
}
