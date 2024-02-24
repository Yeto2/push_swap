/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:05:49 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 22:43:03 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
