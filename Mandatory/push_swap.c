/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:16:21 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/24 07:57:31 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char const *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	i = 1;
	if (argc < 2)
		error(&stack_a);
	while (argv[i])
	{
		initialize_stack(&stack_a, argv[i]);
		i++;
	}
	index_stack(&stack_a);
	is_sorted(&stack_a);
	sort(&stack_a, &stack_b);
	return (0);
}