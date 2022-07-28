NAME = megaphone

CC = clang++

SRCS = megaphone.cpp

OBJS = $(SRCS:.c = .o)

$(NAME) : $(OBJS) 
		$(CC) $(OBJS) -o $(NAME)

%.c:%.o 
	$(CC) -c $< -o $@

all: $(NAME)

fclean: clean
	rm -rf $(NAME)

clean: 
	rm -rf $(NAME)