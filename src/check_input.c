/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:40:33 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/11 17:15:18 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//checks the if the char is valid. It must be a sign, a number, or a space
static int	is_valid_char(char c)
{
	if (c == '-' || c == '+' || c == ' ' || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

//checks if the char received as argument is a sign (- or +)
static int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

//checks if the char is a digit (is between 0 and 9, including them)
static int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

//checks if the input is valid. It must be a number, or a sign 
//in a position different from the 1rst, that follows an space, 
//and is followed by a number
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
