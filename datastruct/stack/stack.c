
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <stdbool.h>


Stack * init(int size)
{
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    stack->top = 0;
    stack->max_size = size;
    stack->data = (void **) malloc(sizeof(void *) * (size + 1));

    return stack;
}

// 栈是否为空
bool is_empty(Stack *stack) 
{
    if (stack == NULL) {
        return true;
    }

    return stack->top == 0 ? true : false;
}

// 栈是否已经满
bool is_full(Stack *stack) 
{
    if (stack == NULL) {
        return true;
    }

    return stack->max_size == stack->top ? true : false;
}

// 添加元素
void push(Stack *stack, void *data)
{
    if (stack == NULL) {
        printf("stack is null, please use init function to init\n");
        exit(1);
    }

    if (is_empty(stack)) {
        printf("stack is full\n");
    }

    stack->top = stack->top + 1;
    stack->data[stack->top] = data;
}

// 弹出元素

void *pop(Stack *stack)
{
    if (stack == NULL) {
        return NULL;
    }

    if (is_empty(stack)) {
        return NULL;
    }

    return stack->data[stack->top--];
}


