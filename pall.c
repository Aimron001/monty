#include "monty.h"
/**
 * pall - prints the elements in the stack
 * @head: top elemnt of the stack
 * Return: void
*/
void pall(stack_t **head)
{
	stack_t *tmp;

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
