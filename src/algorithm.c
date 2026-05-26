/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:13:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/26 13:48:04 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//function that sorts an stack of three numbers, comparing it indexes 
//and hardcoding the movements in order to sort them
static void	sort_three(t_stack **stack)
{
	if (((*stack)->index == 2 && (*stack)->next->index == 1
			&& (*stack)->next->next->index == 0))
	{
		ra(stack);
		ra(stack);
	}
	else if (((*stack)->index == 1 && (*stack)->next->index == 0
			&& (*stack)->next->next->index == 2))
		sa(stack);
	else if (((*stack)->index == 0 && (*stack)->next->index == 2
			&& (*stack)->next->next->index == 1))
	{
		ra(stack);
		sa(stack);
		rra(stack);
	}
	else if (((*stack)->index == 2 && (*stack)->next->index == 0
			&& (*stack)->next->next->index == 1))
		ra(stack);
	else if (((*stack)->index == 1 && (*stack)->next->index == 2
			&& (*stack)->next->next->index == 0))
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
