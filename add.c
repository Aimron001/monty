#include "monty.h"
/**
 * _add - adds the top and the second top elements of the stack.
 * @head: the stack head
 * @count: line_number
 * Return: no returnvoid
*/
void _add(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	int i = 0, ax;

	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.line_content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	ax = tmp->n + tmp->next->n;
	tmp->next->n = ax;
	*head = tmp->next;
	free(tmp);
}
