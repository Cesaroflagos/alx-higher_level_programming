#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Starting point
 * @list: singly linked list
 * Return: if there is cycle 1. if not 0.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);
	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
