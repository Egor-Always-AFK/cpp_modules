NAME = animals

CC = clang++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = src/Animal.cpp src/Cat.cpp src/Dog.cpp src/main.cpp src/WrongAnimal.cpp src/WrongCat.cpp

HEAD = incl/Animal.hpp incl/Cat.hpp incl/Dog.hpp incl/WrongAnimal.hpp incl/WrongCat.hpp

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
