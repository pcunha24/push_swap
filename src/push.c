/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:54:39 by pedalexa          #+#    #+#             */
/*   Updated: 2024/02/28 12:00:13 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_elements(t_list **stack_push, t_list **stack_pull)
{
	t_list	*temp_push;
	t_list	*temp_pull;

	if (!*stack_pull)
		return ;
	temp_pull = (*stack_push);
	temp_push = (*stack_pull)-> next;
	ft_lstadd_front(stack_push, *stack_pull);
	(*stack_push)-> next = temp_pull;
	(*stack_pull) = temp_push;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	push_elements(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push_elements(stack_b, stack_a);
	write(1, "pb\n", 3);
}
