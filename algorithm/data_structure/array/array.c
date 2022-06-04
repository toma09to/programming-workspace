#include "array.h"

int init(Array *array)
{
	array->length = 0;
	return 0;
}

int at(Array *array, int k)
{
	if(k > array->length || k <= 0) return -1;
	return array->elements[k - 1];
}

int insert(Array *array, int k, int val)
{
	if(array->length >= ARRAY_MAX_SIZE || k > array->length + 1) return -1;

	for(int i = array->length; i >= k; i--) {
		array->elements[i] = array->elements[i - 1];
	}
	array->length += 1;
	array->elements[k - 1] = val;

	return 0;
}

int delete(Array *array, int k)
{
	array->length -= 1;
	for(int i = k - 1; i < array->length; i++) {
		array->elements[i] = array->elements[i+1];
	}

	return 0;
}
