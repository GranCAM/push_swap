/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:16:36 by carbon-m          #+#    #+#             */
/*   Updated: 2025/02/24 17:16:56 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*new;

	new = malloc (sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = value;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	add_front(t_stack **stack, t_stack *new)
{
	if (*stack == NULL)
		*stack = new;
	else
	{
		new->next = *stack;
		*stack = new;
	}
}

void	add_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!*stack)
		*stack = new;
	else
	{
		last = stacklast(*stack);
		last->next = new;
	}
}

t_stack	*stacklast(t_stack *stack)
{
	t_stack	*last;
	int		size;

	if (!stack)
		return (NULL);
	size = stacksize(stack);
	while (size > 1)
	{
		stack = stack->next;
		--size;
	}
	last = stack;
	return (last);
}

int	stacksize(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack->next != NULL)
	{
		stack = stack->next;
		++i;
	}
	return (i + 1);
}
