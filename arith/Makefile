main: main.o add.o sub.o prod.o quot.o rem.o
	gcc -o main main.o sub.o add.o prod.o quot.o rem.o

main.o: main.c
	gcc -c -o main.o main.c

add.o: add.c
	gcc -c -o add.o add.c
sub.o: sub.c
	gcc -c -o sub.o sub.c
prod.o: prod.c
	gcc -c -o prod.o prod.c
quot.o: quot.c
	gcc -c -o quot.o quot.c
rem.o: rem.c
	gcc -c -o rem.o rem.c
clean:
	rm -rf *.o main
