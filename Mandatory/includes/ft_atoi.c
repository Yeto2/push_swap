/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:19:32 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/29 16:03:14 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_sign(const char *str, int *i, int *sign)
{
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	check_sign(str, &i, &sign);
	if (!str[i])
		exit(write(2, "Error\n", 6));
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		if ((nbr * sign) > INT_MAX || (nbr * sign) < INT_MIN)
			exit(write(2, "Error\n", 6));
		i++;
	}
	if (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
		exit(write(2, "Error\n", 6));
	return (nbr * sign);
}
