app1.exe:main.o bigof2.o palindrome.o fact.o addnum.o smallof3.o
	gcc -o app1.exe main.o bigof2.o palindrome.o fact.o addnum.o smallof3.o

main.o:main.c
	gcc -c main.c
bigof2.o:bigof2.c
	gcc -c bigof2.c
fact.o:fact.c
	gcc -c fact.c

palindrome.o:palindrome.c
	gcc -c palindrome.c
addnum.o:addnum.c
	gcc -c addnum.c
smallof3.o:smallof3.c
	gcc -c smallof3.c
clean:
	rm -rf *.o
