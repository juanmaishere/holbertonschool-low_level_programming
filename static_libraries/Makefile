CC = gcc
SRC = $(wildcard *.c)
OBJ = ${SRC:.c=.o}
RM = rm

all: ${OBJ}
	$(CC) ${OBJ} -o

clean:
	$(RM) -f $(SRC)

