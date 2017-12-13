/*
** list.h for  in /home/beche_f/CPE_2015_lemin/include
**
** Made by beche_f
** Login   <beche_f@epitech.net>
**
** Started on  Thu Mar 31 11:13:28 2016 beche_f
** Last update Mon Apr 25 19:53:28 2016 beche_f
*/

#ifndef LIST_H_
#define LIST_H_
typedef struct	s_link
{
  struct s_link	*next;
  struct s_link	*prev;
  char		*link;
}		t_link;

typedef	struct	s_l_link
{
  t_link	*head;
  t_link	*tail;
  int		nb_link;
}		t_l_link;

typedef struct	s_node
{
  struct s_node	*next;
  struct s_node	*prev;
  char		*str;
  int		linker;
  char		*name;
  int		x;
  int		y;
  t_l_link	*link;
  int	pos;
}		t_node;

typedef struct	s_list
{
  t_node	*head;
  t_node	*tail;
  int		nb_node;
}		t_list;

typedef struct	s_lem
{
  t_list	*list;
  int		nb_fourmiz;
  t_node	*start;
  t_node	*end;
  int		nb_link;
  int		nb_box;
  t_l_link	*display;
}		t_lem;

typedef struct	s_algo
{
  t_node	*tmp;
  int		nb_ch_start;
  int		nb_ch_end;
  char		**tab;
  char		*end;
  int		i;
  int		stop;
}		t_algo;

char		*get_next_line(int);

t_list		*creat_list();
int		put_box_in_list(t_lem*, t_list*, char*, int);
void		show_list(t_list*);
int		free_list(t_list*);
int		free_link(t_l_link*);
char		*epure_av(char*);
int		get_nb_fourmiz(char*);
int		check_valid_nb_fourmiz(char*);
int		get_fourmiz(t_lem*, char*);
int		check_is_namebox(char*);
int		check_link(char*);
char		*get_box_name(char*);
char		*get_box_y(char*);
char		*get_box_x(char*);
char		*get_link_1(char*);
char		*get_link_2(char*);
int		scan_file(t_lem*, char*);
t_list		*get_link_into_node(t_list*, char*);
t_list		*get_st_end(t_lem*);

t_l_link	*creat_link();
int		put_in_link(t_l_link*, char*);
int		split_link_into_node(t_lem*, t_list*, char*);

char		*my_strcpy(char*);
char		**malloc_tab(t_list*, char**);
void		display_tab(t_lem*, char**, char*);
void		my_putnbr(int);
void		read_display_file();
int		size_way(char**);
void		display_way(char**, int, int, int);
int		algo_l_loop(t_link*, char*, t_lem*);
char		**chmin_loop(t_link*, char**, char*, int);
int		search_end(t_node*);
int		search_start(t_node*);
int		error_map();
int		init_algo(t_algo*, t_list*);
void		loop_end(t_algo*);
void		direct_link(char*, t_lem*);

void		show_link(t_l_link*, int);
int		put_in_link_2(t_l_link*, char*);

char		**algo_1(t_list*, char*, char**, t_lem*);
int		algo(t_list*, t_lem*);
int		chmin(t_list*, char*, char*, char**);
int		nb_chemin(int, int);
#endif /* ! LIST_H_ */
