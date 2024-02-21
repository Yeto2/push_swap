/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:31:08 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/21 13:08:11 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// ------------------- error & free -------------------
void free_stack(t_stack **stack)
{
    t_stack *tmp;
    t_stack *next;
    tmp = *stack;
    while (tmp)
    {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
    *stack = NULL;
}

void error(t_stack **stack)
{
    if (stack)
        free_stack(stack);
    exit(write(2, "Error\n", 6));
}

// ----------------------------------------------------


// ------------------- print_stack -------------------

void print_stack(t_stack **stack)
{
    t_stack *tmp;
    tmp = *stack;
    int index = 1;
    
    printf("\n");
    printf("| Index |\n");
    printf("|------|\n");

    while (tmp != NULL)
    {
        printf("| %5d |\n", tmp->index);
        tmp = tmp->next;
        index++;
    }
    printf("\n");
}
// ----------------------------------------------------