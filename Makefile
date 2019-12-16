GPP=g++
CFLAGS=-Wall -std=c++14 -g -O0 -pedantic-errors

decorypt: decorypt.o base64.o base64.h ascii.o ascii.h rot13.o rot13.h
	$(GPP) -o decorypt decorypt.o base64.o ascii.o rot13.o

decorypt.o: decorypt.cpp base64.h
	$(GPP) $(CFLAGS) -c decorypt.cpp

base64.o: base64.cpp base64.h
	$(GPP) $(CFLAGS) -c base64.cpp
	
ascii.o: ascii.cpp	ascii.h
	$(GPP) $(CFLAGS) -c ascii.cpp
	
rot13.o: rot13.cpp rot13.h
	$(GPP) $(CFLAGS) -c rot13.cpp
clean:
	rm -rf decorypt
	rm -rf *.o
