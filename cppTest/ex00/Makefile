SRCS	=	$(shell find . -name "*.cpp")

OBJS	=	${SRCS:.cpp=.o}

NAME	=	megaphone
	
all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)
clean:
	rm -f ${OBJS} 
fclean:	clean
	rm -f $(NAME)
re:	fclean	all

.PHONY:	all clean fclean re