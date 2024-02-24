/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 05:10:29 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 05:12:19 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **stack_a, int n)
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
	if (n == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack **stackb, int n)
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
		if (n == 1)
			write(1, "rb\n", 3);
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}
