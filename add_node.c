#include "monty.h"
/**
 * add_node - adds a new node at the head stack
 * @head: head of the stack
 * @val: value to be added
 * Return: no return
*/
void add_node(stack_t **head, int val)
{

	stack_t *newNode, *ax;

	ax = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = newNode;
	newNode->n = val;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}
