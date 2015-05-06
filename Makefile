# définition des cibles particulières
.PHONY: clean

# désactivation des règles implicites
#.SUFFIXES:

# définition des variables
CC = gcc
CFLAGS = -W -Wall -v

# all
all: main.o functions.o file.o pointer.o tst_list.o list.o
	$(CC) $^ -o Programme $(CFLAGS)

main.o: functions.h file.h pointer.h tst_list.h
functions.o: functions.h
file.o: file.h
pointerFunction.o: pointer.h
list.o: list.h
tst_list.o: tst_list.h list.h

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

# clean
clean:
	rm -rf *.bak 
	rm -rf *.o
	rm -rf *~
	rm -rf pierre
	rm -rf Programme
