/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:57:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/03/29 18:25:54 by gseco-lu         ###   ########.fr       */
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

void	ft_swap(t_list *x);

void	sa(t_list *a);

void	sb(t_list *b);

void	ss(t_list *a, t_list *b);

void	ft_push(t_list *a, t_list *b);

void	pa(t_list *a, t_list *b);

void	pb(t_list *a, t_list *b);

void	ra(t_list *a);

void	rb(t_list *b);

void	rr(t_list *a, t_list *b);

void	ft_reverse_rotate(t_list *x);

void	rra(t_list *a);

void	rrb(t_list *b);

void	rrr(t_list *a, t_list *b);

void	ft_push_swap(int argc, char **argv);

int		ft_atoi(const char *str);

void	ft_b_to_a(t_list *a, t_list *b);

void	ft_select(t_list *a, t_list *b);

t_stack	*ft_allocate_stack( int num);

void	ft_create_stack(int argc, char **argv);

t_list	*list_a(void);

t_list	*list_b(void);

#endif