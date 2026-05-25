/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:14:59 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/25 16:09:08 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push(t_stack **stack_push, t_stack **stack_receive)
{
	t_stack	*first_spush;
	t_stack	*second_spush;
	t_stack	*first_sreceive;

	if (*stack_push)
	{
		first_spush = *stack_push;
		second_spush = (*stack_push)->next;
		first_sreceive = (*stack_receive);
		*stack_receive = first_spush;
		first_spush->next = first_sreceive;
		*stack_push = second_spush;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	ft_putstr_fd(1, "pa");
}

void	pb(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	ft_putstr_fd(1, "pb");
}
