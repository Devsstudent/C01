CFLAGS=-Wall -Werror -Wextra
CC=gcc
NAME=exectuable
SRC=main.c main.h

main.o : $(SRC)
	$(CC) -c $^ $(CFLAGS)

all : $(NAME) 

$(NAME) : main.o
	$(CC) -o $@ main.o $(CFLAGS) 


clean :
	rm -f *.o

fclean : clean
	rm -f *.gch
	rm -f $(NAME)

re : fclean all
