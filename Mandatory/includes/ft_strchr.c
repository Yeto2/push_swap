/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:20:14 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/23 04:39:11 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	cr;
	char			*str;
	int				i;

	i = 0;
	cr = (unsigned char)c;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == cr)
			return (str + i);
		i++;
	}
	if (str[i] == cr)
		return (str + i);
	return (0);
}
