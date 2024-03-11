/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:54:43 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/11 01:28:46 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	get_max_bits(t_list **stack)
{
	t_list			*temp;
	unsigned int	bits;
	int				max_index;

	temp = *stack;
	bits = 0;
	max_index = 0;
	while (temp)
	{
		if (temp -> index > max_index)
			max_index = temp -> index;
		temp = temp -> next;
	}
	while (max_index >> bits != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int size)
{
	unsigned int	i;
	unsigned int	bit;
	t_list			*temp;

	bit = 0;
	while (bit < 32)
	{
		if (is_sorted(stack_a) && ft_lstsize(*stack_b) == 0)
			return ;
		i = 0;
		temp = *stack_a;
		while (i < (unsigned int)size)
		{
			if ((1 & (temp -> index >> bit)) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			temp = *stack_a;
			i++;
		}
		temp = *stack_b;
		while (*stack_b)
			pa(stack_a, stack_b);
		bit++;
	}
}
