/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:11:50 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/11 02:43:31 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack_args(t_list **stack_a, t_list **stack_b, char *argv[])
{
	int		i;
	t_list	*new;
	char	**str;

	i = 1;
	str = argv;
	if (!check_if_num(str, 1))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		write(2, "Error\n", 6);
		exit (1);
	}
	while (str[i])
	{
		new = ft_lstnew(ft_atol(str[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
}

void	init_stack_arg2(t_list **stack_a, t_list **stack_b, char *argv[])
{
	int		i;
	t_list	*new;
	char	**str;

	i = 0;
	str = ft_split(argv[1], ' ');
	if (!check_if_num(str, 0))
	{
		free_string_array(str);
		free_stack(stack_a);
		free_stack(stack_b);
		write(2, "Error\n", 6);
		exit (1);
	}
	while (str[i])
	{
		new = ft_lstnew(ft_atol(str[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
	free_string_array(str);
}
