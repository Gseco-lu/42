/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:57:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2022/05/06 17:50:49 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct q_node
{
	int				nbr;
	struct q_node	*next;
	int				pos;
	int				first;
	int				order;
	int				sequence;
	int				stack;
	int				moves;
}					t_node;

typedef struct q_list
{
	int				size;
	struct q_node	*begin;
	struct q_node	*end;
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

t_node	*ft_allocate_node( int num);

void	ft_create_stack(t_list *list_a, int argc, char **argv);

t_list	*list_a(void);

t_list	*list_b(void);

int		ft_right_order(t_list *a);

void	ft_order(t_list *a);

void	set_pos(t_list *l);

void	put_smallest_on_top(t_list *l);

int		ft_lis(t_list *l);

void	select_node(t_list *l);

int		ft_exceptions(int argc, char **argv);

int		ft_atol(const char *str);

int		ft_strncmp(const char *s1, const char *s2, int n);

int		ft_strlen(const char *str);

int		ft_isdigit(int arg);

int		*lis_aux(t_list *l, t_node	*q, t_node	*t, int *lis);

int		receive_pos(t_list *x, int y);

int		select_moves(t_list *a, t_list *b);

void	ft_main_moves(t_list *a, t_list *b);

int		moves_count(int a, int b);

int		get_number(t_node *b1, t_list *a, int l_m, int nbr);

void	rr_or_rrr(t_node *s, t_node *b1, t_list *a, t_list *b);

int		moves_count(int a, int b);

void	last_moves_a(t_node *s, t_list *a);

void	push_notlis_b(t_list *a, t_list *b);

void	ft_moves(t_list *l);

int		ft_lis_aux_2(t_list *l, t_node	*t, int *lis);

void	select_node_aux(t_node *s, int max, int before, t_list *l);

void	last_moves_b(t_node *s, t_list *b);

int		lastone(t_list *a);

#endif