CC = gcc

DEL = rm

EXT = psd

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)



all : $(EXT)

$(EXT) : $(OBJ)
	$(CC) -o $@ $^
%.o : %.c
	$(CC) -o $@ -c $<
clean :
	$(DEL) -rf *.o
pilo : clean
	$(DEL) -rf psd
