/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:09:27 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 05:12:13 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	write(1, "pa\n", 3);
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
		write(1, "pb\n", 3);
	}
}
