#include "push_swap.h"

t_list	*get_next_min(t_list **stack, long last_min)
{
	t_list	*temp;
	t_list	*min_element;
	int		min_found;

	temp = *stack;
	min_element = *stack;
	min_found = 2147483647;
	while (temp)
	{
		if (temp -> content > last_min && temp -> content <= min_found)
		{
			min_found = temp -> content;
			min_element = temp;
		}
		temp = temp -> next;
	}
	return (min_element);
}

void	insert_index(t_list	**stack, int size)
{
	int		i;
	long	curr_min;
	t_list	*min_element;

	curr_min = -2147483649;
	i = 0;

	while (i < size)
	{
		min_element = get_next_min(stack, curr_min);
		min_element -> index = i;
		curr_min = min_element -> content;
		i++;
	}	
}