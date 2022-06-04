#ifndef ARRAY_H
#define ARRAY_H

#define ARRAY_MAX_SIZE 1000

typedef struct
{
	int length;
	int elements[ARRAY_MAX_SIZE];
} Array;

int init(Array *array);
int at(Array *array, int k);
int insert(Array *array, int k, int val);
int delete(Array *array, int k);

#endif
