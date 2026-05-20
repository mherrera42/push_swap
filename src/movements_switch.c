/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_switch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:14:59 by mherrera          #+#    #+#             */
/*   Updated: 2026/05/20 12:45:03 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//function that switches the first and second nodes of the stack, redirecting
//the pointers
void	ft_switch(t_stack *stack)
{
	t_stack	*first;
	t_stack	*second;

	*first = *stack;
	*second = *stack->next;
	first->next = second->next->next;
	second->next = first;
	*stack = *second;
}

void	sa(t_stack *a)
{
	ft_switch(a);
	ft_putstr_fd(1, "sa");
}

void	sb(t_stack *b)
{
	ft_switch(b);
	ft_putstr_fd(1, "sb");
}

void	ss(t_stack *a, t_stack *b)
{
	ft_switch(a);
	ft_switch(b);
	ft_putstr_fd(1, "ss");
}


/*
Hay alguna confusión entre los valores y los punteros. Recuerda que first y second son t_stack*, no t_stack**, así que no necesitas el * para usarlos.
Piénsalo así, en pseudocódigo sencillo:
first = *stack            // guardo el primero
second = (*stack)->next   // guardo el segundo

// ahora redirijo los 3 punteros:
first->next = ???         // el primero debe apuntar a qué?
second->next = ???        // el segundo debe apuntar a qué?
*stack = ???              // la cabeza debe apuntar a qué?
¿Qué pondrías en cada ???? */