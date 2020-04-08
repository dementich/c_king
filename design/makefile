stack_test:		stack_test.o	stack.o
				gcc -w -std=c11 -o stack_test.exe stack_test.o	stack.o

stack_test.o:	stack_test.c	stack.h
				gcc -w -std=c11 -c stack_test.c
				
stack.o:		stack.c	stack.h
				gcc -w -std=c11 -c stack.c