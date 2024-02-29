/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:31:08 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/29 16:08:32 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// ------------------- error & free -------------------
void	free_stack(t_stack **a)
{
	t_stack	*tmp;

	while (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		free(tmp);
	}
}

void	error(t_stack **stack, int i)
{
	if (stack)
		free_stack(stack);
	if (i == 1)
		write(2, "Error\n", 6);
	exit(1);
}
