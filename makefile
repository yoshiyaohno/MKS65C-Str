
# default, build all
all : tester.o our_string.o
	gcc -o stringtest tester.o our_string.o

our_string.o : our_string.c our_string.h
	gcc -c our_string.c

tester.o : tester.c our_string.h
	gcc -c tester.c

clean :
	rm stringtest *.o

run :
	./stringtest
