/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:54:57 by pedalexa          #+#    #+#             */
/*   Updated: 2024/02/28 13:51:20 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_elements(t_list **stack)
{
	t_list	*temp;

	if (ft_lstsize(*stack) >= 2)
	{
		temp = (*stack)-> next;
		(*stack)-> next = temp -> next;
		temp -> next = *stack;
		*stack = temp;
	}
}

void	sa(t_list **stack_a)
{
	swap_elements(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap_elements(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap_elements(stack_a);
	swap_elements(stack_b);
	write(1, "ss\n", 3);
}
