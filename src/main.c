/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:34:32 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/11 18:13:32 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#include <stdio.h>

static void	print_stack(t_stack *a)
{
	while (a)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
}

//argv + 1 skips the 1st argv (program's name)
int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		return (1);
	a = NULL;
	if (init(&a, argv + 1) == 1)
		return (put_err_msg());
	print_stack(a);
	// if (!is_sorted(a))
	// 	sort_stack(&a);
	// free_stack(a);
	return (0);
}
