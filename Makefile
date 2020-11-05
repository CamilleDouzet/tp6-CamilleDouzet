# Makefile Question 3 TP6

# options de compilation
CC = gcc
CCFLAGS = -Wall
LIBS = -lm
LIBSDIR = 

# fichiers du projet
SRC = blackjack.c carte.c partie.c
OBJ = $(SRC:.c=.o)
EXEC = run.out


# règle initiale
all: $(EXEC)

# dépendance des .h
blackjack.o: carte.h partie.h
carte.o: carte.h
partie.o: carte.h partie.h
# règles de compilation
%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<
	
# règles d'édition de liens
$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LIBS) $(LIBSDIR)

# règles supplémentaires
clean:
	rm -f *.o
mproper:
	rm -f $(EXEC) *.o