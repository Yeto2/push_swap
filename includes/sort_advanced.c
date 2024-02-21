/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_advanced.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:35:17 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/21 17:31:48 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
int is_empty(t_stack *stack)
{
    if (stack == NULL)
        return (1);
    return (0);
}
// void send_to_b(t_stack **stack_a, t_stack **stack_b, int size)
// {
//     while ((*stack_b))
//     {
//         if ((*stack_b)->index == size)
//         {
//             /* code */
//         }
        
//     }
    
// }
void sort_advanced(t_stack **stack_a, t_stack **stack_b, int size, int to_div)
{
    int chunk_s;
    int mid_chunk_s;
    chunk_s = size / to_div;
    int v = chunk_s;
    mid_chunk_s = chunk_s - (chunk_s/2);
    while ((*stack_a))
    {
            if((*stack_a)->index < chunk_s)
            {  
                pb(stack_a, stack_b);
                if ((*stack_b)->index > mid_chunk_s)
                    rb(stack_b);
            }
            else
                ra(stack_a);
        if(chunk_s == ft_lstsize(*stack_b))
        {
            chunk_s += v;
            mid_chunk_s = v + mid_chunk_s;
        }
    }
    // send_to_b(stack_a, stack_b, size);
}
