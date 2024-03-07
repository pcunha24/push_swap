/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedalexa <pedalexa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:54:26 by pedalexa          #+#    #+#             */
/*   Updated: 2024/03/07 12:00:39 by pedalexa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static void	free_stacks(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
}

static void	push_swap(t_list **stack_a, t_list **stack_b, int stack_size)
{
	if (stack_size == 1)
		return ;
	else if (stack_size == 2 && !is_sorted(stack_a))
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
	if (argc == 2)
		init_stack_arg2(stack_a, stack_b, argv);
	else
		init_stack_args(stack_a, stack_b, argv);
	if (!check_dup(stack_a))
	{
		free_stacks(stack_a, stack_b);
		write(2, "Error\n", 6);
		exit(-1);
	}
	stack_size = count_stack_size(stack_a);
	push_swap(stack_a, stack_b, stack_size);
	free_stacks(stack_a, stack_b);
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
