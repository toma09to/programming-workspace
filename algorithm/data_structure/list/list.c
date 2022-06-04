#include "list.h"

int init(List **list)
{
	List *q = (List *)malloc(sizeof(List));
	if(q == NULL) return -1;

	q->element = -1;
	q->next = NULL;

	*list = q;
	return 0;
}

int insert(List *previous, int val)
{
	List *q = (List *)malloc(sizeof(List));
	if(q == NULL) return -1;

	q->element = val;
	q->next = previous->next;
	previous->next = q;

	return 0;
}

int inserthead(List **list, int val)
{
	List *q = (List *)malloc(sizeof(List));
	if(q == NULL) return -1;

	q->element = val;
	q->next = *list;
	*list = q;

	return 0;
}

int delete(List *previous)
{
	List *q = previous->next;

	previous->next = q->next;
	free(q);

	return 0;
}

int deletehead(List **list)
{
	List *q = *list;

	*list = q->next;
	free(q);

	return 0;
}
