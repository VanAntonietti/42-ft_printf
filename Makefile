NAME	=		libftprintf.a

CC_FLAGS	=	-Wall -Wextra -Werror

LIBFT	=		./libft/libft.a

SRCS	=		ft_printf.c \
				ft_printf_c.c \
				ft_printf_d.c \
				ft_printf_i.c \
				ft_printf_p.c \
				ft_printf_percentage.c \
				ft_printf_s.c \
				ft_printf_u.c \
				ft_printf_x.c \
				ft_printf_xu.c \

OBJS = $(SRCS:.c=.o)
	

all: $(NAME)
	make clean

$(NAME): $(OBJS) $(LIBFT) 
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C ./libft


$(OBJS):
	gcc $(CC_FLAGS) -I./src -c $(addprefix ./src/,$(SRCS))


clean: 
	rm -f $(OBJS) $(LIBFT_OBJS)
	make clean -C ./libft

fclean: clean 
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all

bonus: all

gdb:
	gcc -g3 -I ./src main.c $(addprefix ./src/,$(SRCS)) -L ./libft -lft -ggdb

teste: update
	make re
	cd teste2 && sh test

test: re
	gcc -g3 -I ./src main.c $(addprefix ./src/,$(SRCS)) -L ./libft -lft

test1: re
	gcc -g3 -I ./src testao.c $(addprefix ./src/,$(SRCS)) -L ./libft -lft 

git: 
	git add .
	git commit -m final
	git push

teste2: update re
	make dot -C ./teste

update: 
	git pull
#valgrind --show-leak-kinds=all --track-origins=yes  --leak-check=full  
.PHONY: all clean fclean re teste teste1 teste2 gdb update