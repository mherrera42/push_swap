/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_switch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:14:59 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/19 15:31:28 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_switch(t_stack *stack)
{
	
}

void	sa(t_stack *a)
{
	ft_switch(a);
	ft_putstr_fd(1, "sa");
}

void	sb(t_stack *b)
{
	ft_switch(b);
	ft_putstr_fd(1, "sb");
}

void	ss(t_stack *a, t_stack *b)
{
	ft_switch(a);
	ft_switch(b);
	ft_putstr_fd(1, "ss");
}
