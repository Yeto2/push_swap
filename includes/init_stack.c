/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:45:51 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/17 19:07:30 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_rept(t_stack **stack_a, int nbr)
{
    t_stack *tmp;
    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->value == nbr)
            return 1;
        tmp = tmp->next;
    }
    return 0;
}

void put_in_stack(t_stack **stack_a, int nbr)
{
    t_stack *new;
    t_stack *tmp;
    int is_reperted;

    new = NULL;
    tmp = *stack_a;
    is_reperted = check_rept(stack_a, nbr);
    new = ft_lstnew(nbr);
    if (!new)
        error(stack_a);
    if (is_reperted == 1)
        error(stack_a);
    else
        ft_lstadd_back(stack_a, new);
}

void ititialize_stack(t_stack **stack_a, const char *argv)
{
    int j;
    int k;
    int nbr;
    char **str;

    k = 0;
    j = 0;
    str = ft_split(argv, ' ');
    if (str[0] == NULL)
        error(stack_a);
    while (str[k])
    {
        nbr = ft_atoi(str[k]);
        put_in_stack(stack_a, nbr);
        k++;
    }
}
/* ----------------- Index stack_a ----------------- */
void index_stack(t_stack **stack_a)
{
    int i;
    t_stack *tmp;
    t_stack *tmp2;
    int size;
    int tmp_s;

    size = ft_lstsize(*stack_a);
    tmp_s = size;
    tmp = *stack_a;
    tmp2 = *stack_a;
    i = 0;
    while (tmp->next)
    {
        tmp2 = tmp->next;
        while (tmp2)
        {
            if (tmp->value > tmp2->value)
                tmp->index++;
            else
                tmp2->index++;
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
}
/* ----------------- check if the stack_a is sorted -----------------*/

void is_sorted(t_stack **stack)
{
    t_stack *tmp;
    int size;
    int size2;
    int count;
    
    tmp = *stack;
    size = ft_lstsize(*stack);
    size2 = size;
    count = 0;
    while (size--)
    {    
        if(count == tmp->index)
        {
            count++;
            tmp = tmp->next;
        }
    }
    if (count == size2)
        exit(write(1, "stack is sorted\n", 16));
    
}