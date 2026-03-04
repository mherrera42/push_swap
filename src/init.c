/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:08:52 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/04 17:43:04 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_stack	*create_node(long nbr)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = nbr;
	node->index = 0;
	node->next = NULL;
	return (node);
}

static int	add_nodes(t_stack **a, char **nbrs)
{
	long	nbr;

	while (*nbrs)
	{
		nbr = ft_atol(*nbrs);
		if (nbr > INT_MAX)
			return (1);
		nbrs++;
	}
	return (0);
}

static int	fill_stack(t_stack **a, char **input)
{
	char	**nbrs;

	while (*input)
	{
		nbrs = split(input, ' ');
		if (!nbrs)
			return (1);
		if (!add_nodes(a, nbrs))
			return (1);
		input++;
	}
	return (0);
}

int	init(t_stack **a, char **input)
{
	if (check_input(input) == 1)
		return (1);
	if (fill_stack(a, input) == 1)
		return (1);
}
