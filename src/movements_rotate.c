/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:14:59 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/25 16:10:38 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		second = (*stack)->next;
		last = *stack;
		while (last->next)
		{
			last = last->next;
		}
		last->next = first;
		first->next = NULL;
		*stack = second;
	}
}

void	ra(t_stack **a)
{
	ft_rotate(a);
	ft_putstr_fd(1, "ra");
}

void	rb(t_stack **b)
{
	ft_rotate(b);
	ft_putstr_fd(1, "rb");
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr_fd(1, "rr");
}
