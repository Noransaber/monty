#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

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
 * struct arg_s - container for var
 * @stream: file to bo opened and read
 * @l: line text
 * @l_n: num of line to trrack
 * @tk: store broken down tokens
 * @ins: uasable ins
 * @n_tk; tokens num
 * @head: h
 * @stack_l: num of node in stack
 * @stack: stack
 */
typedef struct arg_s
{
	FILE *s;
        char *l;
	unsigned int l_n;
	char **tk;
	int n_tk;
	instruction_t *ins;
	stack_t *head;
	int stack_l;
	int stack;
} arg_t;

extern arg_t *args;

int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
FILE *fdopen(int fd, const char *mode);

/*ALL FREES FUNCTIONS*/
void h_free(void);
void ags_free(void);
void all_free(void);
void s_free(stack_t *head);
void free_tok(void);


void add_monty(stack_t **stack, unsigned int l_n);
void c_file(void);
int q_com(void);
void del(void);
void g_ins(void);
void invalid_message(void);
void g_s(char *filename);
void gs_messgae(char *filename);
void i_args(void);
int c_num(char *s);
void malloc_m(void);
void nop(stack_t **stack, unsigned int l_n);
void push(stack_t **stack, unsigned int l_n);
void pall(stack_t **stack, unsigned int l_n);
void run(void);
void pop(stack_t **stack, unsigned int l_n);
void pint(stack_t **stack, unsigned int l_n);
void v_args(int argc);
void tokenizer(void);
void swap(stack_t **stack, unsigned int l_n);
#endif
