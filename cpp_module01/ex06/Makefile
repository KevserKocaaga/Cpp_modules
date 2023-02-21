SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:%.cpp=%.o)
NAME = Harl
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) Harl
	
.PHONY: clean fclean all