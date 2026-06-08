/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:19:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/06/08 13:02:34 by mherrera         ###   ########.fr       */
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
/**
 * @brief Checks if the input is valid. It must be a number, or a sign 
in a position different from the 1rst, that follows an space, 
and is followed by a number.
 * 
 * @param str 
 * @return int 
 */
int		check_input(char **str);
/**
 * @brief Traverses the list checking if the numbers in the stack are sorted,
 * pair by pair.
 * 
 * @param a 
 * @return int 
 */
int		is_sorted(t_stack *a);

//init.c
/**
 * @brief Checks if the input is valid, and if so, fills the stack a with the
 *  nbrs.
 * 
 * @param a 
 * @param input 
 * @return int 
 */
int		init(t_stack **a, char **input);

//split.c
char	**ft_free_split(char **split);
char	**ft_split(char *s, char c);

//split_utils.c
char	*ft_substr(char *s, int start, int len);

//algorithm
/**
 * @brief Function that selects the sorting function to be used.
 * It recieves the 'head' (first node) of the list.
 * 
 * @param a Stack a.
 * @param b Stack b.
 */
void	sort_stack(t_stack **a, t_stack **b);

//algorithm_utils
/**
 * @brief Function that counts the nodes of the stack, and returns
 * it size.
 * 
 * @param stack Head to the stack received.
 * @return int Size of the stack received.
 */
int		stack_size(t_stack *stack);
/**
 * @brief Function that traverses the stack, looking for how many nodes have a
 * value minor than the current node. The count will be it index.
 * @param stack Head to the stack received.
 */
void	set_index(t_stack *stack);
/**
 * @brief Function that traverses the stack, looking for the node with the 
 * minimun index, and returning its position.
 * 
 * @param stack The stack received as an argument.
 * @return int The position in the list of the node with the minimun index.
 */
int		find_min_pos(t_stack *stack);
/**
 * @brief Function that checks if the the node with the minimun index is 
 * located in the first half of the stack, or in the last one.
 * 
 * @param a Stack a, received as an argument.
 */
void	bring_min_to_top(t_stack **a);

//movements_push
/**
 * @brief Function that will push the first node from the stack received, to the 
 * other stack.
 * 
 * @param stack_push Head to the stack from which the numbers will be pushed.
 * @param stack_receive Head to the stack that will receive the numbers pushed.
 */
void	ft_push(t_stack **stack_push, t_stack **stack_receive);
/**
 * @brief Function that send a as the stack from which numbers will be pushed, 
 * and b as the stack that will receive the numbers.
 * 
 * @param a Stack a.
 * @param b Stack b.
 */
void	pa(t_stack **a, t_stack **b);
/**
 * @brief Function that send b as the stack from which numbers will be pushed, 
 * and a as the stack that will receive the numbers.
 * 
 * @param a Stack a.
 * @param b Stack b.
 */
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
