#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

// 用数组实现栈
typedef struct Stack_ {
    int max_size; //数组的最大长度  
    int top; // 栈顶
    void **data; // 栈中的元素
} Stack ;

Stack *init(int size);

// 栈是否为空
bool is_empty(Stack *stack);
// 栈是否已经满
bool is_full(Stack *stack);
// 添加元素
void push(Stack *stack, void *data);
// 弹出元素
void *pop(Stack *stack);

#endif
