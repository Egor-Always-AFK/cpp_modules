NAME = diamondTrap

CC = clang++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp src/DiamondTrap.cpp

HEAD = incl/ClapTrap.hpp incl/ScavTrap.hpp incl/FragTrap.hpp incl/DiamondTrap.hpp

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
