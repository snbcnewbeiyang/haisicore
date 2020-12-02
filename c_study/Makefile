first_1:first_1.o
	gcc first_1.o -o first_1
first_1.o:first_1.c
	gcc -c first_1.c -o first_1.o
first_2:first_2.o
	gcc first_2.o -o first_2
first_2.o:first_2.c
	gcc -c first_2.c -o first_2.o

.PHONY:clean
clean:
	rm -rf *.o
