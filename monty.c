#include "monty.h"
/**
* main - a monty code interpreter
* @argc: number of arguments
* @argv: an array - monty file location
* Return: on success - 0
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t len = 0;
	ssize_t readLine = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (readLine > 0)
	{
		content = NULL;
		readLine = getline(&content, &len, file);
		bus.line_content = content;
		count++;
		if (readLine > 0)
		{
			_exec(content, &stack, count, file);
		}
		free(content);
	}
	/*frees stack*/
	freeStack(stack);
	fclose(file);
return (0);
}
