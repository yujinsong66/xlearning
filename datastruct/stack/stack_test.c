#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(int argc, char *argv[])
{
    Stack *stack = init(10);

    int i;

    for (i = 0; i < 10; i++)
    {
        int *data = (int *) malloc(sizeof(int));
        *data = i;
        push(stack, data);
    }

    for (i = 0; i < 10; i++)
    {
        int *d = (int *) pop(stack);
        printf("%d data is %d\n   ", i, *d);
    }

    return 0;
}

