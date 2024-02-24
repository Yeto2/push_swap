/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 00:37:05 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 04:23:13 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if (tmp->value > tmp->next->value && tmp->value < tmp->next->next->value)
		sa(stack_a);
	else if (tmp->value > tmp->next->value
		&& tmp->next->value > tmp->next->next->value)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (tmp->value > tmp->next->value
		&& tmp->next->value < tmp->next->next->value)
		ra(stack_a, 1);
	else if (tmp->value < tmp->next->value
		&& tmp->value < tmp->next->next->value)
	{
		sa(stack_a);
		ra(stack_a, 1);
	}
	else if (tmp->value < tmp->next->value
		&& tmp->value > tmp->next->next->value)
		rra(stack_a);
}

void	sort_foor(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*s_a;
	t_stack	*s_b;

	s_a = *stack_a;
	s_b = *stack_b;
	if (s_a->next->index == 0)
		sa(stack_a);
	else if (s_a->next->next->index == 0)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (s_a->next->next->next->index == 0)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*s_a;
	t_stack	*s_b;

	s_a = *stack_a;
	s_b = *stack_b;
	if (s_a->next->index == 4)
		sa(stack_a);
	else if (s_a->next->next->index == 4)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (s_a->next->next->next->index == 4)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (s_a->next->next->next->next->index == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort_foor(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a, 1);
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	(void)stack_b;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_foor(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else
	{
		if (size > 100)
			sort_advanced(stack_a, stack_b, size, 9);
		else
			sort_advanced(stack_a, stack_b, size, 5);
	}
}
