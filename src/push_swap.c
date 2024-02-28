/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:54:26 by pedalexa          #+#    #+#             */
/*   Updated: 2024/02/28 22:23:39 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static void	init_stack(t_list **stack, int argc, char *argv[])
{
	int		i;
	t_list	*new;
	char	**str;

	i = 0;
	if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		str = argv;
	}
	i = 1;
	while (str[i])
	{
		new = ft_lstnew(ft_atoi(str[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
}

int	count_stack_size(t_list **stack)
{
	t_list	*temp;
	int		i;

	i = 0;
	if (*stack == NULL)
		return (0);
	if ((*stack)-> next == NULL)
		return (1);
	temp = *stack;
	while (temp -> next != NULL)
	{
		i++;
		temp = temp -> next;
	}
	i++;
	return (i);
}

static void	push_swap(t_list **stack_a, t_list **stack_b, int stack_size)
{
	if (stack_size == 1)
	{
		exit (0);
	}
	if (stack_size == 2 && !is_sorted(stack_a))
		ra(stack_a);
	else if (stack_size == 3 && !is_sorted(stack_a))
		mini_sort(stack_a);
	else
	{
		insert_index(stack_a, stack_size);
		radix_sort(stack_a, stack_b, stack_size);
	}
}

int	main(int argc, char *argv[])
{
	t_list	**stack_a;
	t_list	**stack_b;
	int		stack_size;

	if (argc < 2)
		return (-1);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, argc, argv);
	stack_size = count_stack_size(stack_a);
	push_swap(stack_a, stack_b, stack_size);
	return (0);
}

/* t_list *after_a = *stack_a;
	t_list *after_b = *stack_b;

	printf("a: ");
	while (after_a)
	{
		printf("%d ", after_a -> content);
		after_a = after_a -> next;
	}

	printf("b: ");
	while (after_b)
	{
		printf("%d ", after_b -> content);
		after_b = after_b -> next;
	} */
