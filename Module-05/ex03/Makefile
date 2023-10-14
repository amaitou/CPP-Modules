GPP = c++
CFLAGS = -Wall -Wextra -Werror
VFLAG = -std=c++98
NAME = Intern
CPPF = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

SRCS = $(CPPF:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(GPP) $(VFLAG) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(GPP) $(CFLAGS) $(VFLAG) -c $^

fclean:
	rm -rf $(NAME) $(SRCS) *_shrubbery

run:
	@make && ./Intern

re: fclean all