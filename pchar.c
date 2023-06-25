#include "monty.h"
/**
 * _pchar - prints the char at the top of the stack, followed by a new line
 * @head: head of the stack
 * @count: line count
 * Return: void
*/
void _pchar(stack_t **head, unsigned int count)
{
	stack_t *tmp;

	tmp = *head;
	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.line_content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	if (tmp->n > 127 || tmp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.line_content);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}
