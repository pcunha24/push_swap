/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:54:43 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/07 13:26:22 by pedalexa         ###   ########.fr       */
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

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	unsigned int	i;
	int				j;
	int				size;
	unsigned int	max_bits;
	size = ft_lstsize(*stack_a);
	t_list			*temp;
	
	i = 0;
	temp = *stack_a;
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while(j++ < size)
		{
			temp = *stack_a;
			if (((temp -> index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_a);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_a);
		i++;
	}
	if (is_sorted(stack_a) && ft_lstsize(*stack_b) == 0)
		return ;
}

// void	radix_sort(t_list **stack_a, t_list **stack_b, int size)
// {
// 	unsigned int	i;
// 	unsigned int	bit;
// 	t_list			*temp;

// 	bit = 0;
// 	while (bit < 32)
// 	{
// 		if (is_sorted(stack_a) && ft_lstsize(*stack_b) == 0)
// 			return ;
// 		i = 0;
// 		temp = *stack_a;
// 		while (i < (unsigned int)size)
// 		{
// 			if ((1 & (temp -> index >> bit)) == 0)
// 				pb(stack_a, stack_b);
// 			else
// 				ra(stack_a);
// 			temp = *stack_a;
// 			i++;
// 		}
// 		temp = *stack_b;
// 		while (*stack_b)
// 			pa(stack_a, stack_b);
// 		bit++;
// 	}
// }

/* int	is_bits_left(t_list **stack_a, unsigned int bit)
{
	t_list *temp;

	temp = *stack_a;
	while (temp)
	{
		if ((temp->index >> bit) & 1)
			temp = temp -> next;
		else
			return (1);
	}
	return (0);
}

int	get_current_pos(t_list **stack, int index)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp -> index != index)
	{
		i++;
	}
	return (i);
}

void radix_sort(t_list **stack_a, t_list **stack_b, int size) {
    unsigned int bit;
    unsigned int max_bit = get_max_bits(stack_a);

    for (bit = 0; bit < max_bit; bit++) {
        if (is_sorted(stack_a) && ft_lstsize(*stack_b) == 0)
            return;

        while (is_bits_left(stack_a, bit)) {
            t_list *temp_a = *stack_a;
            if (!(temp_a->index & (1 << bit)))
                pb(stack_a, stack_b);
            else
                ra(stack_a);
        }

        while (ft_lstsize(*stack_b)) {
            int median = size / 2;
            if ((*stack_b)->index < median)
                rb(stack_b);
            else
                pa(stack_a, stack_b);
        }
    }
} */