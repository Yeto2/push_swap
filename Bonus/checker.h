/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:40:14 by yessemna          #+#    #+#             */
/*   Updated: 2024/02/24 18:40:20 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>


typedef struct s_stack
{
	int				value;
	int				index;
	int				size;
	struct s_stack	*next;
}	t_stack;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*fill_line_buffer(int fd, char *buffer);
char	*ft_strjoin(char const *s1, char const *s2, int index);

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
// char    *ft_strjoin(char const *s1, char const *s2);
char    **ft_split(char const *s, char c);
t_stack	*ft_lstnew(int nbr);
int		ft_lstsize(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int	ft_strcmp(const char *s1, const char *s2);
void	initialize_stack(t_stack **stack_a, const char *argv);
int	is_sorted(t_stack **stack);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	error(t_stack **stack);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);


void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);


#endif