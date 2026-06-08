/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:08:52 by mherrera          #+#    #+#             */
/*   Updated: 2026/06/04 14:04:56 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Create new node to the stack defined in the .h
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

//si la primera vez que se llama a la funcion, el stack esta vacio,	
//*a = NULL, por lo que last_node es nulo, y al intentar acceder a la
//direccion de memoria de last_node->next, el programa peta. Por tanto,
//hay que proteger el primer bucle con un if
static int	add_nodes(t_stack **a, char **nbrs)
{
	long	nbr;
	t_stack	*new_node;
	t_stack	*last_node;

	last_node = *a;
	if (last_node)
	{
		while (last_node->next)
			last_node = last_node->next;
	}
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

//Receives a pointer to the list's head, and the input (array of strings), and 
//fills the stack with the numbers in the input, adding 1 node for each number.
static int	fill_stack(t_stack **a, char **input)
{
	char	**nbrs;

	while (*input)
	{
		nbrs = ft_split(*input, ' ');
		if (!nbrs)
			return (1);
		if (add_nodes(a, nbrs) == 1)
			return (1);
		ft_free_split(nbrs);
		input++;
	}
	return (0);
}

//Go throught the list, checking if the current node is equal to any of the 
///next nodes.
static int	has_duplicates(t_stack *a)
{
	t_stack	*current_node;

	current_node = a;
	while (current_node)
	{
		while (a)
		{
			if (current_node->next->value == a->value)
				return (1);
			if (a->next)
				a = a->next;
		}
		a = current_node;
		if (current_node->next)
			current_node = current_node->next;
	}
	return (0);
}

int	init(t_stack **a, char **input)
{
	if (check_input(input) == 1)
		return (1);
	if (fill_stack(a, input) == 1)
		return (1);
	if (has_duplicates(*a) == 1)
		return (1);
	return (0);
}
