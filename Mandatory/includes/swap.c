/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:07:28 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 05:12:24 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	write (1, "sa\n", 3);
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
	write(1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
