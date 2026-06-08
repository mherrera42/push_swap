/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:47:00 by mherrera          #+#    #+#             */
/*   Updated: 2026/06/08 13:09:22 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		if (stack->next)
			stack = stack->next;
	}
	return (i);
}

//continuar

void	set_index(t_stack *stack)
{
	stack->index = 0;
	while (stack)
	{
		while (stack->index < stack->next->index)
		{
			stack->next->index = stack->index++;
			if (stack->next)
				stack = stack->next;
		}
	}
}

/*int	get_max_bits()
{
	
}*/

int	find_min_pos(t_stack *stack)
{
	int		pos;
	int		min_pos;
	int		min_index;

	pos = 0;
	min_pos = 0;
	min_index = stack->index;
	while (stack)
	{
		if (stack->index < min_index)
		{
			min_index = stack->index;
			min_pos = pos;
		}
		pos++;
		stack = stack->next;
	}
	return (min_pos);
}

void	bring_min_to_top(t_stack **a)
{
	int	pos;
	int	size;

	pos = find_min_pos(*a);
	size = stack_size(*a);
	if (pos < size / 2)
		while (pos-- > 0)
			ra(a);
	else
		while (pos++ < size)
			rra(a);
}
