/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:47:00 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/27 13:00:18 by mherrera         ###   ########.fr       */
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
//para cada nodo, recorrer toda la lista en busca de cuantos indices tienen
//valor menor
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
