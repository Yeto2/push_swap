/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:48:27 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 05:10:19 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*last_node;
	int		size;
	int		size2;

	if (!*stack_a)
		return ;
	if (!(*stack_a)->next)
		return ;
	size = ft_lstsize(*stack_a);
	size2 = size;
	tmp = *stack_a;
	last_node = *stack_a;
	while (--size)
		last_node = last_node->next;
	last_node->next = tmp;
	*stack_a = last_node;
	while (--size2 - 1)
		tmp = tmp->next;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*second_node;

	second_node = NULL;
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		last = *stack_b;
		while (last->next)
		{
			second_node = last;
			last = last->next;
		}
		last->next = *stack_b;
		second_node->next = NULL;
		*stack_b = last;
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
