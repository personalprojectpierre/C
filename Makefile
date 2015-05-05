# définition des cibles particulières
.PHONY: clean, mrproper

# désactivation des règles implicites
#.SUFFIXES:

# définition des variables
CC = gcc
CFLAGS = -W -Wall -v

# all
all: main.o functions.o
	$(CC) $^ -o Programme $(CFLAGS)

main.o: functions.h
functions.o: functions.h

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

# clean
clean:
	rm -rf *.bak 
	rm -rf *.o
	rm -rf *~
	rm -rf pierre
	rm -rf Programme

# mrproper
mrproper: clean
	rm -rf Programme
