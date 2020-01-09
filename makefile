app1.exe:main.o bigof2.o palindrome.o fact.o
	gcc -o app1.exe main.o bigof2.o palindrome.o fact.o

main.o:main.c
	gcc -c main.c
bigof2.o:bigof2.c
	gcc -c bigof2.c
fact.o:fact.c
	gcc -c fact.c
