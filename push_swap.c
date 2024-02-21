/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:16:21 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/21 16:43:28 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int main(int argc, char const *argv[])
{
    t_stack *stack_a;
    t_stack *stack_b;
    t_stack *tmp;
    int i;

    i = 1;
    if (argc < 2)
        error(&stack_a);
    while (argv[i])
    {
        ititialize_stack(&stack_a, argv[i]);
        i++;
    }
    index_stack(&stack_a);
    is_sorted(&stack_a);

    // printf("\nstack A after\n");
    // print_stack(&stack_a);
    
    sort(&stack_a, &stack_b);

    puts("stack B");
    print_stack(&stack_b);
    
    // printf("\nresult\n");
    // print_stack(&stack_a);
    return 0;
}
