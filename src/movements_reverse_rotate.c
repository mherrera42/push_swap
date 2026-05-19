/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:42:18 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/19 15:50:43 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate(t_stack *stack)
{

}

void	rra(t_stack  *a)
{
	ft_reverse_rotate(a);
	ft_putstr_fd(1, "rra");
}

void	rrb(t_stack *b)
{
	ft_reverse_rotate(b);
	ft_putstr_fd(1, "rrb");
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_putstr_fd(1, "rrr");
}
