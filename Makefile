CC = cc
CFLAGS = -Wall -Werror -Wextra
LIB_DIR = ./sourcefiles
LIB_NAME = libft.a
INC_DIR := $(LIB_DIR)

SRC = main.c
OBJ = $(SRC:.c=.o)

all: program

program: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ -L$(LIB_DIR) -lft
	rm main.o

%.o: %.c
	$(CC) $(CFLAGS) -I./sourcefiles -c -o $@ $<

clean:
	rm -f $(OBJ) program

.PHONY: all clean
