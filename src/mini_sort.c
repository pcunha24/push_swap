#include "push_swap.h"

static int	find_highest(t_list **stack)
{
	t_list	*temp;
	t_list	*last;
	int		highest;

	temp = *stack;
	last = *stack;
	highest = 1;
	if (temp -> content < temp -> next -> content)
	{
		highest = 2;
		temp = temp -> next;
	}
	last = last -> next;
	last = last -> next;
	if (temp -> content < last -> content)
		highest = 3;
	return (highest);
}

void	mini_sort(t_list	**stack)
{
	int	highest;
	if ((is_sorted(stack)))
		return ;
	highest = find_highest(stack);
	printf("highest is %d\n", highest);
	if (highest == 1)
		ra(stack);
	else if (highest == 2)
		rra(stack);
	if (is_sorted(stack))
		return ;
	sa(stack);
}
// find the highest value, if not on 3 reverse rotate or rotate to be in 3, then if not sorted do sa and it will be sorted!