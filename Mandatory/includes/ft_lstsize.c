/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:05:49 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 04:39:42 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int		count;
	t_stack	*t;

	t = lst;
	count = 0;
	while (t != NULL)
	{
		count++;
		t = t -> next;
	}
	return (count);
}
