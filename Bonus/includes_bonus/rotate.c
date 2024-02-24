/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:10:29 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/24 18:31:35 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ra(t_stack **stack_a)
{
	int		size;
	t_stack	*tmp;
	t_stack	*last_node;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	last_node = *stack_a;
	size = ft_lstsize(*stack_a);
	while (--size)
		last_node = last_node->next;
	*stack_a = tmp->next;
	last_node->next = tmp;
	tmp->next = NULL;
}

void	rb(t_stack **stackb)
{
	t_stack	*temp;
	t_stack	*last;

	if (stackb && *stackb && (*stackb)->next)
	{
		temp = *stackb;
		*stackb = (*stackb)->next;
		last = *stackb;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
		temp->next = NULL;
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
