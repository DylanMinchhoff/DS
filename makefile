CFILES = Stack.c
HFILES = Stack.h


driver: stack.o driver.o
	gcc -g stack.o driver.o -o driver

stack.o: Stack.h Stack.c
	gcc $(HFILES) $(CFILES) -c 

driver.o: driver.c
	gcc driver.c -c -o driver.o

clean:
	rm -f *.o