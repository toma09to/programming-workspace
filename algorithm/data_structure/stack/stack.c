#include "stack.h"

int clearstack(Stack *stack)
{
	stack->sp = 0;
	return 0;
}

int push(Stack *stack, int val)
{
	if(stack->sp >= STACK_MAX_SIZE) return -1;

	stack->sp += 1;
	stack->data[stack->sp - 1] = val;
	
	return 0;
}

int pop(Stack *stack)
{
	if(stack->sp <= 0) return -1;

	int val = stack->data[stack->sp - 1];
	stack->sp -= 1;
	
	return val;
}
