suhas.exe:main.o fact.o rev.o fib.o palindrom.o sort.o sum.o
	gcc -o suhas.exe main.o fact.o rev.o fib.o palindrom.o sort.o sum.o
main.o:main.c
	gcc -c main.c
fact.o:fact.c
	gcc -c fact.c
rev.o:rev.c
	gcc -c rev.c
fib.o:fib.c
	gcc -c fib.c
palindrom.o:palindrom.c
	gcc -c palindrom.c
sort.o:sort.c
	gcc -c sort.c
sum.o:sum.c
	gcc -c sum.c
clean:	
	rm -rf *.o suhas.exe
