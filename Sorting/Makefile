INCLUDE_DIRS := Desktop/projects/Personal-Projects/Sorting
CC 			 := g++
CFLAGS 		 := -I$(INCLUDE_DIRS)

# $@ simplifies down to file being created
# $^ adds all prerequisites files needed

final: Sort.o main.cpp
	$(CC) -o $@ $^

Sort.o: Sort.h Sort.cpp
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	del *.o temp final