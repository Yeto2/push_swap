/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:23:43 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/29 16:08:57 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_stack
{
	int				value;
	int				index;
	int				size;
	struct s_stack	*next;
}	t_stack;

/* ----- push_swap includes ----- */
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_list	*ft_lstlast(t_list *lst);
t_stack	*ft_lstnew(int nbr);
int		ft_lstsize(t_stack *lst);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

/* ----- push_swap includes ----- */

void	print_stack(t_stack **stack);
void	error(t_stack **stack, int i);
void	index_stack(t_stack **stack_a);
void	initialize_stack(t_stack **stack_a, const char *argv);
void	is_sorted(t_stack **stack);
void	sort(t_stack **stack_a, t_stack **stack_b);

// ------- push_swap includes -------

void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

void	ra(t_stack **stack_a, int n);
void	rb(t_stack **stack_b, int n);
void	rr(t_stack **stack_a, t_stack **stack_b);

void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);

// ------- push_swap sort -------

void	sort_advanced(t_stack **stack_a,
			t_stack **stack_b, int size, int to_div);
void	push_max_num(t_stack **stack_a, t_stack **stack_b, int big_pos);
void	push_small_num(t_stack **stack_a, t_stack **stack_b, int small_pos);
void	free_stack(t_stack **stack);

#endif