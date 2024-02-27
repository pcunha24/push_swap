#include "push_swap.h"

int	is_sorted(t_list	**stack)
{
	t_list	*temp;
	t_list	*temp_next;

	if (*stack == NULL || (*stack) -> next == NULL)
		return (0);
	temp = *stack;
	temp_next = temp -> next;

	while (temp_next)
	{
		if (temp_next -> content > temp -> content)
		{
			temp = temp -> next;
			temp_next = temp_next -> next;
		}
		else if (temp_next -> content == temp -> content)
		{
			write(2, "Error\n", 6);
			exit (1);
		}
		else
			return (0);
	}
	return (1);
}