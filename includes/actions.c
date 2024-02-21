/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:48:27 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/21 16:45:04 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*------------- Actions ------------*/

// sa - sb -> ss
// ra - rb -> rr
// rra - rrb -> rrr
// pa - pb

void sa(t_stack **stack_a)
{
    t_stack *tmp;
    int swap_v;
    int swap_i;

    if (!*stack_a)
        return;
    if (!(*stack_a)->next)
        return;
    tmp = *stack_a;
    swap_v = tmp->value;
    swap_i = tmp->index;
    tmp->value = tmp->next->value;
    tmp->index = tmp->next->index;
    tmp->next->value = swap_v;
    tmp->next->index = swap_i;
    write(1, "sa\n", 3);
}

void sb(t_stack **stack_b)
{
    t_stack *tmp;
    int swap_v;
    int swap_i;

    if (!*stack_b)
        return;
    if (!(*stack_b)->next)
        return;
    tmp = *stack_b;
    swap_v = tmp->value;
    swap_i = tmp->index;
    tmp->value = tmp->next->value;
    tmp->index = tmp->next->index;
    tmp->next->value = swap_v;
    tmp->next->index = swap_i;
    write(1, "sb\n", 3);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp1;
    t_stack *tmp2;

    tmp1 = *stack_a;
    tmp2 = *stack_b;
    sa(&tmp1);
    sb(&tmp2);
    write(1, "ss\n", 3);
}

void ra(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *last_node;
    int size;

    if (!*stack_a)
        return;
    // if (!(*stack_a)->next)
    //     return;
    size = ft_lstsize(*stack_a);
    tmp = *stack_a;
    last_node = *stack_a;
    while (--size)
        last_node = last_node->next;
    *stack_a = tmp->next;
    last_node->next = tmp;
    tmp->next = NULL;
    write(1, "ra\n", 3);
}

// void rb(t_stack **stack_b)
// {
//     t_stack *tmp;
//     t_stack *last_node;
//     int size;

//     size = ft_lstsize(*stack_b);
//     tmp = *stack_b;
//     last_node = *stack_b;
//     while (--size)
//         last_node = last_node->next;
//     *stack_b = tmp->next;
//     last_node->next = tmp;
//     tmp->next = NULL;
//     write(1, "rb\n", 3);
// }
void	rb(t_stack **stackb)
{
	t_stack	*temp;
	t_stack	*last;

	if (stackb && *stackb && (*stackb)->next)
	{
		temp = *stackb;
		*stackb = (*stackb)->next;
		last = *stackb;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
		temp->next = NULL;
		write(1, "rb\n", 3);
	}
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp1;
    t_stack *tmp2;

    tmp1 = *stack_a;
    tmp2 = *stack_b;
    ra(&tmp1);
    rb(&tmp2);
    write(1, "rr\n", 3);
}

void rra(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *last_node;
    int size;
    int size2;

    if (!*stack_a)
        return;
    if (!(*stack_a)->next)
        return;
    size = ft_lstsize(*stack_a);
    size2 = size;
    tmp = *stack_a;
    last_node = *stack_a;
    while (--size)
        last_node = last_node->next;
    last_node->next = tmp;
    *stack_a = last_node;
    while (--size2 - 1)
        tmp = tmp->next;
    tmp->next = NULL;
    write(1, "rra\n", 4);
}

void rrb(t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *last_node;
    int size;
    int size2;

    size = ft_lstsize(*stack_b);
    size2 = size;
    tmp = *stack_b;
    last_node = *stack_b;
    while (--size)
        last_node = last_node->next;
    last_node->next = tmp;
    *stack_b = last_node;
    while (--size2 - 1)
        tmp = tmp->next;
    tmp->next = NULL;
    write(1, "rrb\n", 4);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp1;
    t_stack *tmp2;

    tmp1 = *stack_a;
    tmp2 = *stack_b;
    rra(&tmp1);
    rrb(&tmp2);
    write(1, "rrr\n", 4);
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *tmp2;

    if (!*stack_b)
        return;
    tmp = *stack_b;
    tmp2 = *stack_a;
    *stack_b = tmp->next;
    tmp->next = tmp2;
    *stack_a = tmp;
    write(1, "pa\n", 3);
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *tmp2;

    // if (!*stack_a)
    //     return;
    // if (!(*stack_a)->next)
    // {
    //     // printf("OK\n");
    //     return;
    // }
    tmp = *stack_a;
    tmp2 = *stack_b;
    *stack_a = tmp->next;
    tmp->next = tmp2;
    *stack_b = tmp;
    write(1, "pb\n", 3);
}
