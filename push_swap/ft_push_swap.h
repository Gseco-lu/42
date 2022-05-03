/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:57:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/03 17:11:53 by gseco-lu         ###   ########.fr       */
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
	int				pos;
	int				first;
	int				order;
	int				sequence;
	int				stack;
	int				moves;
}					t_stack;

typedef struct q_list
{
	int				size;
	struct q_stack	*begin;
	struct q_stack	*end;
	int				is_print;
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

void	ft_create_stack(t_list *list_a, int argc, char **argv);

t_list	*list_a(void);

t_list	*list_b(void);

void	print_list(t_list *a, char *list);

int		ft_right_order(t_list *a);

void	ft_order(t_list *a);

void	set_pos(t_list *l);

void	ft_sequence(t_list *l);

int		ft_lis_body(t_list *l, int n, int *max_ref);

int 	ft_lis(t_list *l);

void	select_stack(t_list *l);

int		ft_exceptions(int argc, char **argv);

int		ft_atol(const char *str);

int		ft_strncmp(const char *s1, const char *s2, int n);

int		ft_strlen(const char *str);

int		ft_isdigit(int arg);

int		*lis_aux(t_list *l, t_stack	*q, t_stack	*t, int *lis);

int		receive_pos(t_list *x, int y);

void	ft_moves(t_list *l);

#endif