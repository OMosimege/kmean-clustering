#g++ minitut_four.cpp -o minitut_four -std=c++11

CC=g++ # the compiler name
CCFLAGS=-std=c++11 
LIBS=-lm -lX # the libraries we will reference
# the normal build rules

kmean: kmean.o kmeanDriver.o
	$(CC) $(CCFLAGS) kmean.o kmeanDriver.o -o kmean

kmean.o: kmean.cpp kmean.h
	$(CC) $(CCFLAGS) kmean.cpp -c

kmeanDriver.o: kmeanDriver.cpp kmean.h
		$(CC) $(CCFLAGS) kmeanDriver.cpp -c


run: 
	./kmean

# other rules; no dependency; e.g. ‘‘make clean’’
clean:
	rm -f *.o
	rm kmean
