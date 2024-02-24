/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:05:18 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 22:43:00 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

t_stack	*ft_lstnew(int nbr)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		exit(write(2, "Error\n", 6));
	new_node -> value = nbr;
	new_node -> index = 0;
	new_node -> next = NULL;
	return (new_node);
}
