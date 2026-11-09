CC = gcc
OBJS = arrays.o exe.o functions3.o main.o 
EXEC = lab3
DEBUG = -g
CFLAGS = -Wall -Werror $(DEBUG)

$(EXEC) : $(OBJS)
	$(CC)  $(OBJS) -o $@

arrays.o: arrays.c arrays.h
exe.o: exe.c functions3.h exe.h
functions3.o: functions3.c functions3.h
main.o: main.c exe.h

clean:
	rm -f $(OBJS) $(EXEC)