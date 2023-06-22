#include "monty.h"

/**
* s_free - set all stack's node free
* @head: ptr first node
*/
void s_free(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		s_free(head->next);
	}
	free(head);
}
