#include "monty.h"

/**
* del_node - to del node at the head
* Return: NOTHING
*/

void del_node(void)
{
	stack_t *tempN;

	tempN = args->head;
	args->head = tempN->next;
	free(tempN);
}
