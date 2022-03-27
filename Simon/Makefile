#	ARGS

NAME		=	Simon

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

#	FILES

SRCS		=	main.cpp

OBJS 		=	$(SRCS:.cpp=.o)

#	RULES

all			:	run score

$(NAME)		:	$(OBJS)
				@$(CC) $(CFLAGS) $^ -o $@

re			:	fclean all

clean		:
				@$(RM) $(OBJS)

fclean		:	clean
				@$(RM) $(NAME)

run			:	$(NAME)

score		:
				@echo "---------------[ SIMON SAYS ]-------------"
				@echo "|           powered by lmarzano          |"
				@echo "|                                        |"
				@echo "|         enter "./Simon" to play        |"
				@echo "------------------[READY]-----------------"
				./Lockpick
				

.phony		:	run clean fclean re score