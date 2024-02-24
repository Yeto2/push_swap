/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:09:27 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/24 18:29:30 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	tmp2 = *stack_a;
	*stack_b = tmp->next;
	tmp->next = tmp2;
	*stack_a = tmp;
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*top_a;

	if (stack_a && (*stack_a))
	{
		top_a = *stack_a;
		*stack_a = top_a->next;
		top_a->next = *stack_b;
		*stack_b = top_a;
	}
}
