CC=gcc
CFLAGS= -Wall -g

Major1: major1.c endian.c parity.c clz.c Rotate.c
	                $(CC) -o Major1 $(CLFAGS) major1.c endian.c parity.c clz.c Rotate.c
clean:
	                $(RM) Major1
run:
	                ./Major1
