#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: head of the list
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *c;

	if (list == NULL || list->next == NULL)
		return (0);

	current = list;
	c = current->next;

	while (current != NULL && check->next != NULL && check->next->next != NULL)
	{
		if (current == check)
			return (1);
		current = current->next;
		check = check->next->next;
	}
	return (0);
}
