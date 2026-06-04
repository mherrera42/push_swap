/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:13:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/06/04 11:42:53 by mherrera         ###   ########.fr       */
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

// function that sorts an stack of five numbers
// static void	sort_five(t_stack **a)
// {
//
// }

static void	radix_sort(t_stack **a, t_stack **b)
{
	t_stack	*first_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	first_a = *a;
	size = stack_size(first_a);
	max_bits = get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			first_a = *a;
			if (((first_a->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (stack_size(*b) != 0)
			pa(a, b);
		i++;
	}
}

// //function that selects the sorting function to be used
// //it recieves a the 'head' (first node) of the list
void	sort_stack(t_stack **a, t_stack **b)
{
	set_index(*a);
	if (stack_size(*a) == 3)
		sort_three(a);
	else if (stack_size(*a) <= 5)
		sort_five(a);
	else
		radix_sort(a, b);
}
