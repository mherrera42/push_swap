/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:34:32 by mherrera          #+#    #+#             */
/*   Updated: 2026/02/17 14:25:18 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc < 2)
		return (1);
	a = NULL;
	if (init(&a, argv + 1) == 1)
		return (put_error_msg());
	if (!is_sorted(a))
		sort_stack(&a);
	free_stack(a);
	return (0);
}
