#include "monty.h"
/**
 * _mod - divides the second topthe top element of the stack
 * @head: stack head
 * @count: line count
 * Return: void
*/
void _mod(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.line_content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	ax = tmp->next->n % tmp->n;
	tmp->next->n = ax;
	*head = tmp->next;
	free(tmp);
}
