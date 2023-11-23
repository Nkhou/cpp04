NAME = Materia
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		Character.cpp\
		AMateria.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp\

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
