#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - struct for variables -arguements, file, line content
 * @arg: arguement
 * @file: pointer to the  monty file
 * @line_content: line content
 * @lifi: flag  stack -> queue
 * Description: holds  values for  the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *line_content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clear_line(char *content);
void _push(stack_t **head, unsigned int num);
void _pall(stack_t **head, unsigned int num);
void _pint(stack_t **head, unsigned int num);
int _exec(char *content, stack_t **head, unsigned int count, FILE *file);
void free_stack(stack_t *head);
void _pop(stack_t **head, unsigned int count);
void _swap(stack_t **head, unsigned int count);
void _add(stack_t **head, unsigned int count);
void _nop(stack_t **head, unsigned int count);
void _sub(stack_t **head, unsigned int count);
void _div(stack_t **head, unsigned int count);
void _mul(stack_t **head, unsigned int count);
void _mod(stack_t **head, unsigned int count);
void _pchar(stack_t **head, unsigned int count);
void _pstr(stack_t **head, unsigned int count);
void _rotl(stack_t **head, unsigned int count);
void _rotr(stack_t **head, __attribute__((unused)) unsigned int count);
void add_node(stack_t **head, int val);
void add_queue(stack_t **head, int val);
void _queue(stack_t **head, unsigned int count);
void _stack(stack_t **head, unsigned int count)
#endif
