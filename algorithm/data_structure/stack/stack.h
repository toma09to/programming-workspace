#ifndef STACK_H
#define STACK_H

#define STACK_MAX_SIZE 1000

typedef struct
{
	int sp;
	int data[STACK_MAX_SIZE];
} Stack;

int clearstack(Stack *stack);
int push(Stack *stack, int val);
int pop(Stack *stack);

#endif
