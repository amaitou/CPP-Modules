
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = ClapTrap
CPPF = main.cpp ClapTrap.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VGLAG) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(GPP) $(CFLAGS) $(VFLAG) -c $^

fclean:
	rm -rf $(NAME) $(SRCS)

re: fclean all
