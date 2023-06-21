#ifndef MONTY_H
#define MONTY_H
/*Header Files*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct args_s - Variables holder
 * @stream: file connecter
 * @line: text we will read from the connector
 * @tokens: where we will stroe tokens from line
 * @head: first node of tthe stack
 * @stack: check where data struc
 * @stack_len: How many nodes?
 * @n_tokens: How many tokens we have
 * @line_num: My current num of line
 * @instruction: Accepted instrc from token
 **/

typedef struct arg_s
{
	FILE *stream;
	char *line;
	unsigned int line_num;
	char **tokens;
	int n_tokens;
	instruction_t *instruction;
	stack_t *head;
	int stack_len;
	int stack;
} arg_t;

extern arg_t *args;


/*FREE FUNCTIONS*/
void free_tok(void);
void free_S(stack_t *head);
void free_h(void);
void free_args(void);
void args_freedom(void);
void end_stream(void);


/*ERROR HANDLING FUNCTIONS*/
void malloc_error(void);
void stream_failer(char *filename);


/*STACK MODIFICATIONS FUNCTIONS*/
void swap(stack_t **stack, unsigned int line_num);
void pop(stack_t **stack, unsigned int line_num);
void pint(stack_t **stack, unsigned int line_num);
void pall(stack_t **stack, unsigned int line_num);
void nop(stack_t **stack, unsigned int line_num);
void add(stack_t **stack, unsigned int line_num);

/*HELPER FUNCTIONS*/
void valid_args(int argc);
void del_node(void);
void tokenization(void);
void run(void);
void init_args(void);
void get_instruc(void);
void getting_stream(char *fileName);

/*OTHERS*/
int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *f, FILE *stream);
FILE *fdopen(int fd, const char *mode);

#endif /*MONTY_H*/
