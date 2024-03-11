/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_till_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 00:46:03 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/11 00:48:43 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int		rotated;

	rotated = 0;
	while (rotated < 2)
	{
		if ((*stack_a)-> index == 2 || (*stack_a)-> index == 3)
		{
			pb(stack_a, stack_b);
			rotated++;
		}
		else
			ra(stack_a);
	}
	if (!is_sorted(stack_a))
		sa(stack_a);
	if (is_sorted(stack_b))
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a);
	ra(stack_a);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int		rotated;

	rotated = 0;
	while (rotated < 2)
	{
		if ((*stack_a)-> index == 3 || (*stack_a)-> index == 4)
		{
			pb(stack_a, stack_b);
			rotated++;
		}
		else
			ra(stack_a);
	}
	if (!is_sorted(stack_a))
		mini_sort(stack_a);
	if (is_sorted(stack_b))
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a);
	ra(stack_a);
}
