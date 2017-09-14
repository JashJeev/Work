all: s1.c
	gcc -c s1.c
	ls
	ar -cvq libstatic.a s1.o
	nm libstatic.a 
	ranlib libstatic.a 
	gcc -o main main.c libstatic.a 
	./main

clean: 
	rm libstatic.a main s1.o 
