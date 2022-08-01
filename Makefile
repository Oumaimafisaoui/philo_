SRC = main.c operations.c  mutex.c utils.c exit.c parse.c philos.c time.c end_all.c print.c
OBJ = $(SRC:.c=.o)

NAME  = philo

all : $(NAME)

$(NAME) : $(OBJ)
	gcc -pthread $(OBJ) -o $(NAME)
	@echo "\033[92mIt compiles !\033[0m"

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) $(OBJ)
re: fclean all

.PHONY : all clean fclean re
