#include "push_swap.h"

void	swap_elements(t_list **stack)
{
	t_list *temp;

	if (ft_lstsize(*stack) >= 2)
	{
		temp = (*stack) -> next;
		(*stack) -> next = temp -> next;
		temp -> next = *stack;
		*stack = temp;
	}
}

void	sa(t_list **stack_a)
{
	swap_elements(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap_elements(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap_elements(stack_a);
	swap_elements(stack_b);
	write(1, "ss\n", 3);
}

void	push_elements(t_list **stack_push, t_list **stack_pull)
{
	t_list	*temp_push;
	t_list	*temp_pull;

	if (!*stack_pull)
		return ;
	temp_pull = (*stack_push);
	temp_push = (*stack_pull) -> next;
	ft_lstadd_front(stack_push, *stack_pull);
	(*stack_push) -> next = temp_pull;
	(*stack_pull) = temp_push;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	push_elements(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push_elements(stack_b, stack_a);
	write(1, "pb\n", 3);
}

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
	write(1, "ra\n", 3);
}

void	rb(t_list	**stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list	**stack_a, t_list	**stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}

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