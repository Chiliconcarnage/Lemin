##
## Makefile for  in /home/beche_f/CPE_2015_lemin
## 
## Made by beche_f
## Login   <beche_f@epitech.net>
## 
## Started on  Wed Mar 30 11:35:16 2016 beche_f
## Last update Mon Apr 25 19:57:45 2016 beche_f
##

CC	=	gcc

RM	=	rm -rf

NAME	=	lem_in

SRC	=	src/main.c			\
		src/liste/show_list.c		\
		src/liste/creat_list.c		\
		src/liste/put_in_list.c		\
		src/liste/free_list.c		\
		src/epure_my_gnl.c		\
		src/get_nb_fourmiz.c		\
		src/check_is_namebox.c		\
		src/check_link.c		\
		src/get_box_x.c			\
		src/get_box_y.c			\
		src/get_link.c			\
		src/scan_file.c			\
		src/get_st_end.c		\
		src/liste/creat_link.c		\
		src/split_link_into_node.c	\
		src/liste/put_in_link.c		\
		src/liste/show_link.c		\
		src/create_tab.c		\
		src/main_follow.c		\
		src/direct.c			\
		src/algo.c			\
		src/my_strcpy.c

LIB     =       lib/my/function.c       \
                lib/my/get_next_line.c  \
                lib/my/my_getnbr.c      \
                lib/my/my_memset.c      \
                lib/my/my_put_nbr.c     \
                lib/my/my_strcat.c      \
                lib/my/str_2_wordtab.c  \
                lib/my/free_char_2d.c   \
                lib/my/display_char_2d.c\
                lib/my/malloc_char_2d.c	\
		lib/my/my_strcmp.c

OBJ     =       $(SRC:.c=.o) $(LIB:.c=.o)


INCLUDE	=	-I./include -I./lib/my/include

FLAGS   =       -W -Wall -Werror -ansi -pedantic

CFLAGS  =       $(INCLUDE) $(FLAGS)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
