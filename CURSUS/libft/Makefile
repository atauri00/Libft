NAME	= libft.a

SRCS	= ft_isalpha.c ft_isdigit.c\
		  ft_isalnum.c ft_isascii.c ft_isprint.c\
		  ft_strlen.c\
		  ft_memset.c\

OBJS	= $(SRCS:.c=.o)

LIBC	= ar rcs

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

INCS	= libft.h

$(NAME): $(OBJS) 
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re .c .o
