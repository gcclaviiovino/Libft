SRCFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c
BSRCFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize ft_lstlast \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJFILES = {SRCFILES: .c=.o}
BOBJFILES = {BSRCFILES: .c=.o}
NAME = libft.a
LIBCR = ar rcs
RM = rm -f

%.o: %.c
	gcc -c $< -o $@

all: ${NAME}

${NAME}: {OBJFILES}
	${LIBCR} ${NAME} ${OBJFILES}

bonus: ${NAME} ${BOBJFILES}
	${LIBCR} ${NAME} ${BOBJFILES}
clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME} ${bonus}

re: all fclean
.PHONY: all clean fclean re bonus