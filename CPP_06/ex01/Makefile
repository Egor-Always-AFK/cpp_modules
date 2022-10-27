NAME = data

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Data.cpp main.cpp

HEAD = Data.hpp

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
