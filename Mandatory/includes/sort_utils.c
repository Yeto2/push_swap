/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:50:25 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 03:29:35 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_max_num(t_stack **stack_a, t_stack **stack_b, int big_pos)
{
	if (big_pos > (ft_lstsize((*stack_b)) / 2))
	{
		big_pos = (ft_lstsize((*stack_b))) - big_pos;
		while (big_pos--)
			rrb(stack_b);
	}
	else
	{
		while (big_pos--)
			rb(stack_b, 1);
	}
	pa(stack_a, stack_b);
}

void	push_small_num(t_stack **stack_a, t_stack **stack_b, int small_pos)
{
	if (small_pos > (ft_lstsize(*stack_b) / 2))
	{
		small_pos = ft_lstsize(*stack_b) - small_pos;
		while (small_pos--)
			rrb(stack_b);
	}
	else
	{
		while (small_pos--)
			rb(stack_b, 1);
	}
	pa(stack_a, stack_b);
}
