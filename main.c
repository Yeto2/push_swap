/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 06:01:19 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/17 00:11:44 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
    t_stack *a;
    t_stack *a2;
    t_stack *a3;
    
    a = NULL;
    
    a = ft_lstnew(5);
    a2 = ft_lstnew(10);
    a3 = ft_lstnew(15);
    
    ft_lstadd_back(&a, a2);
    ft_lstadd_back(&a, a3);

    while (a)
    {
        printf("%d\n", a->value);
        a = a->next;
    }
    return 0;
}


/*


void index_stack(t_stack **stack)
{
    t_stack *tmp;
    t_stack *tmp2;
    int i;
    int j;
    int min;
    int max;
    int index;
    int size;
    int *tab;
    
    i = 0;
    j = 0;
    index = 0;
    tmp = *stack;
    size = ft_lstsize(tmp);
    tab = (int *)malloc(sizeof(int) * size);
    if (!tab)
        error(stack);
    while (tmp)
    {
        tab[i] = tmp->value;
        i++;
        tmp = tmp->next;
    }
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                min = tab[j];
                tab[j] = tab[i];
                tab[i] = min;
            }
            j++;
        }
        i++;
    }
    i = 0;
    tmp = *stack;
    while (tmp)
    {
        j = 0;
        while (j < size)
        {
            if (tmp->value == tab[j])
            {
                tmp->index = j;
                break;
            }
            j++;
        }
        tmp = tmp->next;
    }
    free(tab);
}


*/