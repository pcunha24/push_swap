#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h> 

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	push_swap 
{
	int					content;
	int					index;
	struct push_swap	*next;
}						t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	swap_elements(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
int		ft_lstsize(t_list *lst);
void	ss(t_list **stack_a, t_list **stack_b);
void	push_elements(t_list **stack_push, t_list **stack_pull);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_front(t_list **lst, t_list *new);


#endif