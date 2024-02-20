#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static void	init_stack(t_list **stack, int argc, char *argv[])
{
	int	i;
	t_list	*new;
	int		*numbers;
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

int main (int argc, char *argv[])
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (-1);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;

	init_stack(stack_a, argc, argv);

	t_list *before_a = *stack_a;
	t_list *before_b = *stack_b;

	printf("\nbefore a: ");
	while (before_a)
	{
		printf("%d ", before_a -> content);
		before_a = before_a -> next;
	}

	printf("\nbefore b: ");
	while (before_b)
	{
		printf("%d ", before_b -> content);
		before_b = before_b -> next;
	}

	// AFTER THE FUNCTION GETS CALLED

	rra(stack_a);


	t_list *after_a = *stack_a;
	t_list *after_b = *stack_b;

	printf("\nafter a: ");
	while (after_a)
	{
		printf("%d ", after_a -> content);
		after_a = after_a -> next;
	}

	printf("\nafter b: ");
	while (after_b)
	{
		printf("%d ", after_b -> content);
		after_b = after_b -> next;
	}

	return (0);
}
