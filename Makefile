CC=gcc
CFLAGS :=  $(CFLAGS) -Wall -g -Werror

BaseConverter: BaseConverter.o main.o
	$(CC) $(CFLAGS) BaseConverter.o main.o -lm -o BaseConverter

test: BaseConverter.o test.o
	$(CC) $(CFLAGS) BaseConverter.o test.o -lm -o test
	./test

run: BaseConverter
	./BaseConverter

clean:
	rm -f BaseConverter test *.o
