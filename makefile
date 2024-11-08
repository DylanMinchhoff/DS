

driver: headers.o driver.o
	gcc driver.o headers.o -o driver

headers.o:
	gcc -c stack.h -o headers.o

driver.o:
	gcc -c driver.c -o driver.o