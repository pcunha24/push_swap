/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:47:05 by pedalexa          #+#    #+#             */
/*   Updated: 2024/02/28 13:48:56 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h> 

typedef struct push_swap 
{
	int					content;
	int					index;
	struct push_swap	*next;
}						t_list;

t_list	*ft_lstnew(int content);
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
void	rotate(t_list	**stack);
void	ra(t_list	**stack_a);
void	rb(t_list	**stack_b);
void	rr(t_list	**stack_a, t_list	**stack_b);
void	reverse_rotate(t_list	**stack);
void	rra(t_list	**stack_a);
void	rrb(t_list	**stack_b);
void	rrr(t_list	**stack_a, t_list	**stack_b);
void	insert_index(t_list	**stack, int size);
int		is_sorted(t_list **stack);
void	mini_sort(t_list **stack);
void	radix_sort(t_list **stack_a, t_list **stack_b, int size);

#endif
