#include "monty.h"
/**
  *_rotl- rotates the stack to the top
  *@head: stack head
  *@count: line count
  *Return: void
 */
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *ax;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ax = (*head)->next;
	ax->prev = NULL;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = ax;
}
