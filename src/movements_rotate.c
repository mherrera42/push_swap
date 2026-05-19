/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:14:59 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/19 15:49:50 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_stack *stack)
{
	
}

void	ra(t_stack *a)
{
	ft_rotate(a);
	ft_putstr_fd(1, "ra");
}

void	rb(t_stack *b)
{
	ft_rotate(b);
	ft_putstr_fd(1, "rb");
}

void	rr(t_stack *a, t_stack *b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr_fd(1, "rr");
}
