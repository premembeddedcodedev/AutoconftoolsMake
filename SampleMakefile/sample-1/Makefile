all: sample

driver.o: driver.c api.h
	gcc -c driver.c

sample: test.c driver.o
	gcc -o $@ $^
