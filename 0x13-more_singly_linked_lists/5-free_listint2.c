#include "lists.h"
/**
* free_listint2 - function
* @head: ptr to ptr to beginning of list
*
* Description: function to free list
* Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head; /* Will store head ->next*/

	while (*head != NULL)
	{
		temp = *head;
		/* free the stuff inside what head is pointing to*/
		free(temp);
		*head = head->next; /* goes to next node in list and repeat process*/
	}
}
