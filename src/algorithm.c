/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:13:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/25 16:28:08 by mherrera         ###   ########.fr       */
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

// function that sorts an stack of three numbers
// static void	sort_three(t_stack **a)
// {
	
// }

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
