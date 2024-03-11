/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:54:21 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/10 23:34:58 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_highest(t_list **stack)
{
	t_list	*temp;
	t_list	*last;
	int		highest;

	temp = *stack;
	last = *stack;
	highest = 1;
	if (temp -> content < temp -> next -> content)
	{
		highest = 2;
		temp = temp -> next;
	}
	last = last -> next;
	last = last -> next;
	if (temp -> content < last -> content)
		highest = 3;
	return (highest);
}

void	mini_sort(t_list	**stack)
{
	int	highest;

	if ((is_sorted(stack)))
		return ;
	highest = find_highest(stack);
	if (highest == 1)
		ra(stack);
	else if (highest == 2)
		rra(stack);
	if (is_sorted(stack))
		return ;
	sa(stack);
}
