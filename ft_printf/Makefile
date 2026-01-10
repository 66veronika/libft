NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
AR			= ar rcs
RM 			= rm -rf
INCLUDES	= -I.

SRCS		=	ft_printf.c\
				ft_putchar.c\
				ft_puthex.c\
				ft_putnbr.c\
				ft_putptr.c\
				ft_putstr.c\
				ft_putunsigned.c\


OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
