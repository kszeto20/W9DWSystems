all: construction.o fMember.o
	gcc -o output construction.o fMember.o

contruction.o: construction.c fMember.h
	gcc -c construction.c

fMember.o: fMember.c
	gcc -c fMember.c

run:
	./output

clean:
	rm *.o
	rm output
