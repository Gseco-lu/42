
#include "ft_push_swap.h"

/*void	ft_select(t_list *a, t_list *b)
{
	while (a->begin->nbr != a->begin->next->before)
	{
		if (a->begin->nbr < a->begin->next->nbr)
		{
			rra(a);
			pa(a, b);
		}
		else
			rra(a);
	}
}
void	ft_b_to_a(t_list *a, t_list *b)
{
	while (b->begin->next)
	{
		if (a->begin->before == b->begin->nbr && b->begin->first == 0)
			pb(a, b);
		else
			rb(b);
	}
	if (b->begin->first == 0 && a->begin->before == b->begin->nbr)
		pb(a, b);
	else
		rra(a);
}*/

void	ft_order(t_list *a)
{
	t_stack	*x;
	t_stack	*y;
	int		i;

	x = a->begin;
	y = a->begin->next;
	i = 0;
	while (x && y)
	{
		if (x->nbr > y->nbr)
		{
			i++;
		}
		y = y->next;
		if (!y)
		{
			y = a->begin;
			x->order = i;
			x = x->next;
			i = 0;
		}
	}
}

int	ft_right_order(t_list *a)
{
	t_stack	*x;
	t_stack	*y;

	x = a->begin;
	y = a->begin->next;
	while (x && y)
	{
		if (x->nbr > y->nbr)
		{
			return (0);
		}
		x = x->next;
		y = x->next;
	}
	return (1);
}