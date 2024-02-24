/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:15:46 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/24 18:45:54 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_move_type(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		sa (a);
	else if (!ft_strcmp(line, "sb\n"))
		sb (b);
	else if (!ft_strcmp(line, "ss\n"))
		ss (a, b);
	else if (!ft_strcmp(line, "pa\n"))
		pa (a, b);
	else if (!ft_strcmp(line, "pb\n"))
		pb (a, b);
	else if (!ft_strcmp(line, "ra\n"))
		ra (a);
	else if (!ft_strcmp(line, "rb\n"))
		rb (b);
	else if (!ft_strcmp(line, "rr\n"))
		rr (a, b);
	else if (!ft_strcmp(line, "rra\n"))
		rra (a);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb (b);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr (a, b);
	else
	{
		free(line);
		printf("Error\n");
		exit(1);
	}
}

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    char *line;
	int i;
	i = 1;
	
    if (argc > 1)
    {
        b = NULL;
		while (argv[i])
		{
			initialize_stack(&a, argv[i]);
			i++;
		}
        b = NULL;
		while (1)
		{
			line = get_next_line(0);
			if (!line)
			{
				free(line);
				break ;
			}
			check_move_type(&a, &b, line);
			free(line);
		}
		if(is_sorted(&a) != 1 && b == NULL)
			printf("OK\n");
		else
			printf("KO\n");	
    }
}