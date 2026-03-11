/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:19:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/11 18:15:17 by mherrera         ###   ########.fr       */
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
int		ft_strlen(const char *s);
void	ft_putstr_fd(char *msg, int fd);
long	ft_atol(char *str);

//init.c
int		init(t_stack **a, char **input);

//check_input
int		check_input(char **str);

//split.c
char	**ft_free_split(char **split);
char	**ft_split(char *s, char c);

//split_utils.c
char	*ft_substr(char *s, int start, int len);

//algorithm
void	sort_function(t_stack **a);

//exit_utils.c
int		put_err_msg(void);

#endif
