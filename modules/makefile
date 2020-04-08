bar:	bar.o foo.o
		gcc -o bar bar.o foo.o
bar.o:	bar.c foo.h
		gcc -c bar.c
foo.o:	foo.c foo.h
		gcc -c foo.c