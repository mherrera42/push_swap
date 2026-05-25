/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:42:18 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/25 16:09:43 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//tomar apuntes y explicar el nodo penultimate
void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;
	t_stack	*penultimate;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		second = (*stack)->next;
		last = *stack;
		penultimate = *stack;
		while (last->next)
		{
			last = last->next;
		}
		while (penultimate->next->next)
		{
			penultimate = penultimate->next;
		}
		last->next = first;
		penultimate->next = NULL;
		*stack = last;
	}
}

void	rra(t_stack **a)
{
	ft_reverse_rotate(a);
	ft_putstr_fd(1, "rra");
}

void	rrb(t_stack **b)
{
	ft_reverse_rotate(b);
	ft_putstr_fd(1, "rrb");
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_putstr_fd(1, "rrr");
}
