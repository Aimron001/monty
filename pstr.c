#include "monty.h"
/**
 * _pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @head: head of the stack
 * @count: line count
 * Return: void
*/
void _pstr(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	(void)counter;

	tmp = *head;
	while (tmp)
	{
		if (tmp->n > 127 || tmp->n <= 0)
		{
			break;
		}
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
