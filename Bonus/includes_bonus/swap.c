/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:07:28 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/24 18:29:17 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	sa(t_stack **stack_a)
{
	t_stack	*tmp;
	int		swap_v;
	int		swap_i;

	if (!*stack_a)
		return ;
	if (!(*stack_a)->next)
		return ;
	tmp = *stack_a;
	swap_v = tmp->value;
	swap_i = tmp->index;
	tmp->value = tmp->next->value;
	tmp->index = tmp->next->index;
	tmp->next->value = swap_v;
	tmp->next->index = swap_i;
}

void	sb(t_stack **stack_b)
{
	t_stack	*tmp;
	int		swap_v;
	int		swap_i;

	if (!*stack_b)
		return ;
	if (!(*stack_b)->next)
		return ;
	tmp = *stack_b;
	swap_v = tmp->value;
	swap_i = tmp->index;
	tmp->value = tmp->next->value;
	tmp->index = tmp->next->index;
	tmp->next->value = swap_v;
	tmp->next->index = swap_i;
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
