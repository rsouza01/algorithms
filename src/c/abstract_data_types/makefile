#
# TUTORIAL MAKEFILE
#
# http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
#
#
#

CC=gcc
CFLAGS=-I.
IDIR =../include


llists:	lists.o	main.o $(IDIR)/lists.h
	$(CC) -o llists lists.o main.o -I.

clean:
	rm ./*.o ./llists
