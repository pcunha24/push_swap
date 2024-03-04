/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:11:58 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/04 15:00:49 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;

	if (*stack == NULL)
	{
		free(stack);
		return ;
	}
	temp = *stack;
	while (temp)
	{
		temp2 = temp;
		temp = temp -> next;
		free(temp2);
	}
	*stack = NULL;
	free(stack);
}

int	check_if_num(char **str, int i)
{
	int	h;
	int	num_found;

	while (str[i])
	{
		h = 0;
		num_found = 0;
		while (str[i][h])
		{
			if ((str[i][h] >= 9 && str[i][h] < 13) ||
				str[i][h] == 32 || (str[i][h] >= '0'
				&& str[i][h] <= '9') || str[i][h] == '-' || str[i][h] == '+')
			{
				if (str[i][h] >= '0' && str[i][h] <= '9')
					num_found = 1;
				if ((str[i][h] == '-' || str[i][h] == '+') && num_found == 1)
					return (0);
				h++;
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	free_string_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}