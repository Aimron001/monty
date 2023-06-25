#include "monty.h"
/**
 * _div -  divides second top  by the top elements of the stack
 * @head: head of the stack
 * @count: line count
 * Return: void
*/
void _div(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = tmp->next->n / tmp->n;
	tmp->next->n = ax;
	*head = tmp->next;
	free(tmp);
}
