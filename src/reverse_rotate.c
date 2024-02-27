#include "push_swap.h"

void	reverse_rotate(t_list	**stack)
{
	t_list	*temp;
	t_list	*first;
	t_list	*last;

	if (*stack == NULL || (*stack) -> next == NULL)
	{
		return ;
	}
	temp = *stack;
	first = *stack;
	while (temp -> next -> next != NULL)
	{
		temp = temp -> next;
	}
	last = temp -> next;
	*stack = last;
	(*stack) -> next = first;
	temp -> next = NULL;
}

void	rra(t_list	**stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list	**stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list	**stack_a, t_list	**stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}