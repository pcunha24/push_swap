/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:11:58 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/13 20:35:46 by pedalexa         ###   ########.fr       */
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

	while (str[i])
	{
		h = 0;
		while (str[i][h] == 32)
			h++;
		if (str[i][h] == '+' || str[i][h] == '-')
			h++;
		if (str[i][h] >= '0' && str[i][h] <= '9')
		{
			while (str[i][h] >= '0' && str[i][h] <= '9')
				h++;
			while (str[i][h] && str[i][h] == 32)
				h++;
			if (str[i][h] && str[i][h] != 32)
				return (0);
		}
		else
			return (0);
		i++;
	}
	return (1);
}

int	is_more_nums(char **str)
{
	int	i;
	int	h;

	h = 0;
	while (str[h])
	{
		i = 0;
		while (str[h][i] && (str[h][i] < '1' || str[h][i] > '9'))
			i++;
		while (str[h][i] && str[h][i] >= '1' && str[h][i] <= '9')
		{
			i++;
		}
		while (str[h][i])
		{
			if (str[h][i] != '\0' && str[h][i] != 32)
				return (0);
			i++;
		}
		h++;
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
