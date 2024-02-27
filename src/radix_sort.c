#include "push_swap.h"

void	radix_sort(t_list **stack_a, t_list **stack_b, int size)
{
	unsigned int	i;
	unsigned int	bit;
	t_list			*temp;

	bit = 0;
	while(bit < 32)
	{
		i = 0;
		temp = *stack_a;
		while (i < (unsigned int)size)
		{
			if((1 & (temp -> index >> bit)) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			temp = *stack_a;
			i++;
		}
		temp = *stack_b;
		while (*stack_b)
			pa(stack_a, stack_b);
		bit++;
		if (is_sorted(stack_a))
			return ;
	}
}