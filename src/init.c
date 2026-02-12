/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:08:52 by mherrera          #+#    #+#             */
/*   Updated: 2026/02/12 14:24:58 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	fill_stack()
{
}

int	init(t_stack **a, char **input)
{
	if (check_input(input) == 1)
		return (1);
	if (fill_stack(a, input) == 1)
		return (1);
}
