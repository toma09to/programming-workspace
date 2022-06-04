#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#define LIST_MAX_SIZE 1000

typedef struct list
{
	int element;
	struct list *next;
} List;

int init(List **list);
int insert(List *previous, int val); 
int inserthead(List **list, int val); 
int delete(List *previous);
int deletehead(List **list);

#endif
