/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:53:33 by pedalexa          #+#    #+#             */
/*   Updated: 2024/02/28 22:53:38 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *stack;
	while (temp)
	{
		temp2 = temp -> next;
		while (temp2)
		{
			if (temp -> content == temp2 -> content)
				return (0);
			temp2 = temp2 -> next;
		}
		temp = temp -> next;
	}
	return (1);
}
