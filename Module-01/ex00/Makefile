
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = Zombie
CPPF = 	Zombie.cpp main.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VGLAG) $(CFLAGS) $^ -o $@

fclean:
	rm -rf $(NAME) $(SRCS)

re: fclean all