NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Werror -Wextra
AR			= ar rcs
RM 			= rm -rf
INCLUDES	= -I.

SRCS		=	ft_isalpha.c\

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
