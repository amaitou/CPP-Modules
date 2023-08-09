
GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = AAnimal
CPPF = main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VGLAG) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(GPP) $(CFLAGS) $(VFLAG) -c $^

fclean:
	rm -rf $(NAME) $(SRCS)

re: fclean all
