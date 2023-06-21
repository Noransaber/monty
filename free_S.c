#include "monty.h"
/**
 * free_S - remove the list nodes
 * @head: ptr to FIRST node on the list
 * Return: NOTHING
 **/
void free_S(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_S(head->next);
	}
	free(head);
}
