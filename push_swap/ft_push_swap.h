/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:57:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/24 19:12:35 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct q_stack
{
	int				nbr;
	struct q_stack	*next;
}					t_stack;

typedef struct q_list
{
	int				size;
	struct q_stack	*begin;
	struct q_stack	*end;
}					t_list;

/*void	ft_swap(t_stack **x);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ft_push(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);*//*
void	ra(t_list *a);
void	rb(t_list *b);
void	rr(t_list *a, t_list *b);
void	ft_reverse_rotate(t_stack **x);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	ft_push_swap(int argc, char **argv);
int		ft_atoi(const char *str);*/
t_stack	*ft_allocate_stack( int num);
void	ft_create_stack(int argc, char **argv);
t_list	*list_a(void);
t_list	*list_b(void);

#endif