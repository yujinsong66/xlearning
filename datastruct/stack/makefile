stack: stack_test.o stack.o
	gcc -o stack stack_test.o stack.o
stack_test.o: stack_test.c stack.h
	gcc -c stack_test.c
stack.o: stack.c stack.h
	gcc -c stack.c