#include "monty.h"
/**
 * push - adds an element at the top of the stack
 * @head: head of the stack
 * @count: the line cont
 * Return: void
*/
void push(stack_t **head, unsigned int count)
{
	int val, i = 0, f = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	val = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(head, val);
	else
		add_queue(head, val);
}
