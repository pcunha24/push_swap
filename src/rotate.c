#include "push_swap.h"

void	rotate(t_list	**stack)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack == NULL || (*stack) -> next == NULL)
	{
		return ;
	}
	tmp = *stack;
	last = NULL;
	while (tmp -> next != NULL)
	{
		tmp = tmp -> next;
		last = tmp;
	}
	last -> next = *stack;
	*stack = (*stack) -> next;
	last -> next -> next = NULL;

}

void	ra(t_list	**stack_a)
{
	rotate(stack_a);
	update_index(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list	**stack_b)
{
	rotate(stack_b);
	update_index(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list	**stack_a, t_list	**stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	update_index(stack_a);
	update_index(stack_b);
	write(1, "rr\n", 3);
}
