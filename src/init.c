/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:08:52 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/11 17:18:08 by mherrera         ###   ########.fr       */
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

//
static int	add_nodes(t_stack **a, char **nbrs)
{
	long	nbr;
	t_stack	*new_node;
	t_stack	*last_node;

	last_node = *a;
	while (last_node->next)
		last_node = last_node->next;
	while (*nbrs)
	{
		nbr = ft_atol(*nbrs);
		if (nbr > INT_MAX)
			return (1);
		new_node = create_node(nbr);
		if (!new_node)
			return (1);
		if (*a == NULL)
			*a = new_node;
		else
			last_node->next = new_node;
		last_node = new_node;
		nbrs++;
	}
	return (0);
}

//receives a pointer to the list's head, and the input (array of strings), and 
//fills the stack with the numbers in the input, adding 1 node for each number
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
		ft_free_split(nbrs);
		input++;
	}
	return (0);
}

//checks if the input is valid, and if so, fills the stack a with the nbrs
int	init(t_stack **a, char **input)
{
	if (check_input(input) == 1)
		return (1);
	if (fill_stack(a, input) == 1)
		rehturn (1);
}
