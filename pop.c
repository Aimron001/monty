#include "monty.h"
/**
 * _pop - removes the top element of the stack.
 * @head: head stack
 * @count: line count
 * Return: void
*/
void _pop(stack_t **head, unsigned int count)
{
	stack_t *tmp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	*head = tmp->next;
	free(tmp);
}
