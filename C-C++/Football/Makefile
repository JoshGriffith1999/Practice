
INCLUDE_DIRS := D:/home/josh/Desktop/Practice/C-C++/Football
CC 			 := g++
CFLAGS 		 := -I$(INCLUDE_DIRS)

# $@ simplifies down to file being created
# $^ adds all prerequisites files needed

FootballFinal: Football.cpp controller.o Team.o Offsense.o Defense.o
	$(CC) -o $@ $^

controller.o: controller.cpp controller.h
	$(CC) -c -o $@ $<

Team.o: Team.cpp Team.h
	$(CC) -c -o $@ $<

Offsense.o: Offsense.cpp Offsense.h
	$(CC) -c -o $@ $<

Defense.o: Defense.cpp Defense.h
	$(CC) -c -o $@ $<

#template for future objects
#Object.o: Object.cpp Object.h
#	$(CC) -c -o $@ $<

clean:
	rm -f *.o