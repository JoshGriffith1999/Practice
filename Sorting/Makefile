INCLUDE_DIRS := Desktop/projects/Personal-Projects/Sorting
CC 			 := g++
CFLAGS 		 := -I$(INCLUDE_DIRS)

# $@ simplifies down to file being created
# $^ adds all prerequisites files needed

final: Main.cpp Sort.o
	$(CC) -o $@ $^

Sort.o: Sort.hpp Sort.cpp
	$(CC) -o $@ $^

.PHONY: clean
clean:
	del *.o temp final