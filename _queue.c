#include "monty.h"
/**
 * queue - prints top o the queue
 * @head: head of the stack
 * @count: line count
 * Return: void
*/
void queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * add_queue - adds an element at the end
 * @val: new value
 * @head: head of the stack
 * Return: void
*/
void add_queue(stack_t **head, int val)
{
	stack_t *newNode;
	stack_t *ax;

	ax = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
	}
	newNode->n = val;
	newNode->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		ax->next = newNode;
		newNode->prev = ax;
	}
}
