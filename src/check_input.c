/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:40:33 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/02 18:53:35 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_valid_char(char c)
{
	if (c == '-' || c == '+' || c == ' ' || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

static int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

static int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_input(char **input)
{
	int	i;
	int	j;

	j = 0;
	while (input[j])
	{
		i = 0;
		while (input[j][i])
		{
			if (!is_valid_char(input[j][i]))
				return (1);
			if (is_sign(input[j][i])
				&& ((i != 0 && input[j][i - 1] != ' ')
				|| !is_digit(input[j][i + 1])))
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}
