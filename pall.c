#include "monty.h"
/**
 * _pall - prints the elements in the stack
 * @head: top elemnt of the stack
 * @count: line count
 * Return: void
*/
void _pall(stack_t **head, unsigned int count)
{
	stack_t *tmp;
	(void)count;

	tmp = *head;
	if (tmp == NULL)
	{
		return;
	}
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
