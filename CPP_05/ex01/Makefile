NAME = form

CC = clang++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Bureaucrat.cpp Form.cpp main.cpp 

HEAD = Bureaucrat.hpp Form.hpp

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
