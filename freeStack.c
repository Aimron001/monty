#include "monty.h"
/**
* freeStack - frees a stack
* @head: stack head
*/
void freeStack(stack_t *head)
{
	stack_t *ax;

	ax = head;
	while (head)
	{
		ax = head->next;
		free(head);
		head = ax;
	}
}
