SRC_LIB		=	./libft
LIBFT		=	libft.a

NAME 	= 	libftprintf.a

HD		=	ft_printf.h

FLAGS	= 	-Wall -Werror -Wextra

SRS		= 	ft_put.c		ft_treat_diuts.c	ft_treat_dtohx.c	\
			ft_printf.c

OBJS	=	$(SRS:.c=.o)

all : 		$(NAME)

%.o :		%.c $(HD)
			gcc $(FLAGS) -c $< -o $@ -I $(HD)

$(NAME)	: 	$(OBJS)
			$(MAKE) -C $(SRC_LIB)
			cp $(SRC_LIB)/$(LIBFT) $(NAME)
			ar rcs $(NAME) $?

clean :
			$(MAKE) clean -C $(SRC_LIB)
			rm -f $(OBJS)

fclean : 	clean
			$(MAKE) clean -C $(SRC_LIB)
			rm -f $(NAME)

re :		fclean all

.PHONY: all clean fclean re
