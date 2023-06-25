#include "monty.h"
/**
* _exec - executes the opcode
* @stack: linked list head (stack)
* @count: line count
* @file: a pointer to the monty file
* @content: line content
* Return: 0
*/
int _exec(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"sub", _sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", _rotl},
				{"rotr", _rotr},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *op;
	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && op)
	{
		if (strcmp(op, opst[j].opcode) == 0)
		{	opst[j].f(stack, counter);
			return (0);}
		j++;
	}
	if (op && opst[j].opcode == NULL)
	{	fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		freeStack(*stack);
		exit(EXIT_FAILURE);}
	return (0);
}
