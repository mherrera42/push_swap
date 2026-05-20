/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:13:38 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/20 11:38:58 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	stack_size(t_stack *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		if (a->next)
			a = a->next;
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
void	sort_stack(t_stack **a)
{
	if (stack_size(a) == 3)
		sort_three(&a);
	else if (stack_size(a) <= 5)
		sort_five(&a);
	else
		radix_sort(&a);
}
