/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:13:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/25 17:17:22 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	stack_size(t_stack *stack)
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

//function that sorts an stack of three numbers
//hay que comparar por indices, no por numeros... Es decir, necesito una
//funcion que asigne indices a los numeros en funcion de su ordem
static void	sort_three(t_stack **stack)
{
	//if (*stack == 1 && (*stack)->next == 2 && (*stack)->next->next == 3)
		//nothing happens
	if (((*stack)->index == 3 && (*stack)->next->index == 2
			&& (*stack)->next->next->index == 1))
	{
		ra(stack);
		ra(stack);
	}
	else if (((*stack)->index == 2 && (*stack)->next->index == 1
			&& (*stack)->next->next->index == 3))
		sa(stack);
	else if (((*stack)->index == 1 && (*stack)->next->index == 3
			&& (*stack)->next->next->index == 2))
	{
		ra(stack);
		sa(stack);
		rra(stack);
	}
	else if (((*stack)->index == 3 && (*stack)->next->index == 1
			&& (*stack)->next->next->index == 2))
		ra(stack);
	else if (((*stack)->index == 2 && (*stack)->next->index == 3
			&& (*stack)->next->next->index == 1))
		rra(stack);
}

// //function that sorts an stack of five numbers
// static void	sort_five(t_stack **a)
// {
		
// }
// //radix sort for more than five numbers
// static void	radix_sort(t_stack **a)
// {

// }

// //function that selects the sorting function to be used
// //it recieves a the 'head' (first node) of the list
void	sort_stack(t_stack **stack)
{
	if (stack_size(stack) == 3)
		sort_three(&stack);
	else if (stack_size(stack) >= 3 && stack_size(stack) <= 5)
		sort_five(&stack);
	else
		radix_sort(&stack);
}
