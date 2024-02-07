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
	t_list *temp_push;
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