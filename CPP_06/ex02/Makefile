NAME = base

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = Base.cpp main.cpp

HEAD = Base.hpp A.hpp B.hpp C.hpp

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
