#include "push_swap.h"

void	update_index(t_list	**stack)
{
	int	i;
	t_list	*temp;

	if (!*stack)
		return ;
	i = 1;
	temp = *stack;
	while (temp)
	{
		temp -> index = i++;
		temp = temp -> next;
	}
}