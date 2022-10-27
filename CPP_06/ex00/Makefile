NAME = converter

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Converter.cpp main.cpp

HEAD = Converter.hpp

OBJS = $(SRCS:.c = .o)

$(NAME) : $(OBJS) $(HEAD)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.c:%.o 
	$(CC) -c $< -o $@

all: $(NAME)

fclean: clean
	rm -rf $(NAME)

clean: 
	rm -rf $(NAME)
