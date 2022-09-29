NAME = phonebook

CC = clang++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = contact.cpp phonebook.cpp main.cpp

OBJS = $(SRCS:.c = .o)

$(NAME) : $(OBJS) 
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.c:%.o 
	$(CC) -c $< -o $@

all: $(NAME)

fclean: clean
	rm -rf $(NAME)

clean: 
	rm -rf $(NAME)