/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_advanced.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:35:17 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 04:15:24 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_pos(t_stack *stack_b, int *big_index, int *small_index, int a)
{
	t_stack	*tmp;
	int		size;

	*big_index = 0;
	*small_index = 0;
	tmp = stack_b;
	size = ft_lstsize(stack_b);
	while (stack_b)
	{
		if (stack_b->index == size - a)
			break ;
		(*big_index)++;
		stack_b = stack_b->next;
	}
	while (tmp)
	{
		if (tmp->index == size - 2)
			break ;
		(*small_index)++;
		tmp = tmp->next;
	}
}

void	push_to_sa(t_stack **stack_a, t_stack **stack_b)
{
	int	big_pos;
	int	small_pos;
	int	best_move1;
	int	best_move2;

	while (*stack_b)
	{
		index_pos((*stack_b), &big_pos, &small_pos, 1);
		best_move1 = big_pos;
		best_move2 = small_pos;
		if (big_pos > (ft_lstsize((*stack_b)) / 2))
			best_move1 = (ft_lstsize((*stack_b)) - big_pos);
		if (small_pos > (ft_lstsize((*stack_b)) / 2))
			best_move2 = (ft_lstsize((*stack_b)) - small_pos);
		if (best_move2 < best_move1)
		{
			push_small_num(stack_a, stack_b, small_pos);
			index_pos((*stack_b), &big_pos, &small_pos, 0);
			push_max_num(stack_a, stack_b, big_pos);
			sa(stack_a);
		}
		else
			push_max_num(stack_a, stack_b, big_pos);
	}
}

void	inc_size(t_stack **stack_b, int *chunk_s, int *mid_chunk_s, int cpy_s)
{
	if ((*chunk_s) == ft_lstsize(*stack_b))
	{
		*chunk_s += cpy_s;
		*mid_chunk_s = cpy_s + *mid_chunk_s;
	}
}

void	sort_advanced(t_stack **s_a, t_stack **s_b, int size, int to_div)
{
	int	chunk_s;
	int	mid_chunk_s;
	int	cpy_s;

	chunk_s = size / to_div;
	cpy_s = chunk_s;
	mid_chunk_s = chunk_s - (chunk_s / 2);
	while ((*s_a))
	{
		if ((*s_a)->index >= chunk_s)
			ra(s_a, 1);
		else
		{
			pb(s_a, s_b);
			if ((*s_b)->index >= mid_chunk_s)
			{
				if ((*s_a) && (*s_a)->index >= chunk_s)
					rr(s_a, s_b);
				else
					rb(s_b, 1);
			}
		}
		inc_size(s_b, &chunk_s, &mid_chunk_s, cpy_s);
	}
	push_to_sa(s_a, s_b);
}
