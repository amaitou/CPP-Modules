
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = Animal
CPPF = main.cpp Animal.cpp Dog.cpp Cat.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VGLAG) $(CFLAGS) $^ -o $@

fclean:
	rm -rf $(NAME) $(SRCS)

re: fclean all
