/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:19:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/02 17:43:56 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

//init.c
int		init(t_stack **a, char **input);

//check_input
int		check_input(char **str);

//algorithm
void	sort_function(t_stack **a);

//general_utils
void	ft_putstr_fd(char *msg, int fd);
long	ft_atol(char *str);

//exit_utils.c
int		put_err_msg(void);

#endif
