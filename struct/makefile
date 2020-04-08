parts:				parts.o parts_lib.o
					gcc -std=c11 -o parts.exe parts.o parts_lib.o

parts.o:			parts.c
					gcc -std=c11 -c parts.c

parts_lib.o:		parts_lib.c parts_lib.h
					gcc -std=c11 -c parts_lib.c