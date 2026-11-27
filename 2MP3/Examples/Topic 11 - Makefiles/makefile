CC = gcc
Cflags = -Wall -O3 -o

all : top test

top : top.c products.o sums.o C_Shanties.o
	$(CC) $(Cflags) top top.c products.o sums.o C_Shanties.o

products.o : products.c
	echo 'Now Compiling Products.c'
	$(CC) -c $(Cflags) products.o products.c
	
sums.o : sums.c
	$(CC) -c $(Cflags) sums.o sums.c
	
C_Shanties.o : C_Shanties.c
	
	$(CC) -c $(Cflags) C_Shanties.o C_Shanties.c

test : 
	./testing.sh
	
clean : 
	rm -f *.o
