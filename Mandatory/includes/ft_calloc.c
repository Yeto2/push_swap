/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:07:51 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/11 20:50:16 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	long	cnt;
	long	sz;

	cnt = (long)count;
	sz = (long)size;
	if (cnt < 0 || sz < 0)
		return (0);
	ptr = malloc(cnt * size);
	if (!ptr)
	{
		return (0);
	}
	ft_bzero(ptr, cnt * size);
	return (ptr);
}
