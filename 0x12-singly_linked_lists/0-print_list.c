#include<stdio.h>
#include<stdlib.h>
#include "lists.h"
#include<string.h>

/**
 *print_list - fuction name
 *@h : pointer
 *Return : the number of nodes.
 */

size_t print_list(const list_t *h)

{
	int i  = 0;

	while (h)
	{
	if (h->str != NULL)
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
	printf("[0] (nil)");
	}
	i++;
	h = h->next;
	}
	return (i);
}


