##                    
## EPITECH PROJECT, 2018                                 
## makefile                        
## File description:                                 
## makefile                                            
##                                          

CC	=	gcc

RM	=	rm -rf

SRC	=	my_printf.c		\
		tools/my_putchar.c	\
		tools/my_put_nbr.c	\
		tools/my_put_special.c	\
		tools/my_put_binary.c	\
		tools/my_putstr.c	\
		tools/my_strlen.c	\
		tools/my_put_base.c

CFLAGS	=	-I./include

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

mr_clean :
	find -type f -name "*~" -delete -o -type f -name "#*#" -delete

.PHONY : all clean fclean mr_clean re
