/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:19:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/26 13:56:34 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

//general_utils
void	ft_putnbr_fd(int n, int fd);
int		ft_strlen(const char *s);
void	ft_putstr_fd(char *msg, int fd);
long	ft_atol(char *str);

//check_input
int		check_input(char **str);
int		is_sorted(t_stack *a);

//init.c
int		init(t_stack **a, char **input);

//split.c
char	**ft_free_split(char **split);
char	**ft_split(char *s, char c);

//split_utils.c
char	*ft_substr(char *s, int start, int len);

//algorithm
void	sort_stack(t_stack **a);

//algorithm_utils
int		stack_size(t_stack *stack);
void	set_index(t_stack *stack);

//movements_push
void	ft_push(t_stack **stack_push, t_stack **stack_receive);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

//movements_reverse_rotate
void	ft_reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

//movementes_rotate
void	ft_rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

//movements_switch
void	ft_switch(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

//exit_utils.c
int		put_err_msg(void);

#endif
