SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)
INCS = .

TARGET = libft.a

CC = gcc
CFLAGES = -Wall -Wextra -Werror
LIBC = ar -rcs
RM = rm -f

all : $(TARGET)

.c.o:
	$(CC) $(CFLAGES) -o $@ -c $< -I$(INCS)

$(TARGET) : $(OBJS)
	$(LIBC) $(TARGET) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all
