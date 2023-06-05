#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if singly linked list is a cycle
 * Return: 0 if no cycle, 1 is yes
*/
int check_cycle(listint_t *list)
{
	listint_t *index = list;
	listint_t *head = list;

	if (!list)
		return (0);

	while (1)
	{
		if (index->next != NULL && index->next->next != NULL)
		{
			index = index->next->next;
			head = head->next;

			if (index == head)
				return (1);
		}
		else
			return (0);
	}

}
