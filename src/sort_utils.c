/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:28:22 by carbon            #+#    #+#             */
/*   Updated: 2025/03/02 20:15:48 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_sqrt(int nbr)
{
	int	i;

	if (nbr == 0)
		return (0);
	i = 1;
	while (i * i <= nbr)
		i++;
	return (i - 1);
}

void	push_to_b(t_stack **stack_a, t_stack **stack_b, int a_size, int b_size)
{
	int	range;

	range = get_sqrt(a_size) * 133 / 100;
	while (a_size > 0)
	{
	if ((*stack_a)->index <= b_size)
		{
		pb(stack_a, stack_b);
			a_size--;
			b_size++;
		}
		else if ((*stack_a)->index <= b_size + range)
		{
		pb(stack_a, stack_b);
			a_size--;
			b_size++;
			if (!((*stack_a)->index <= b_size + range) && b_size > 1)
				rr(stack_a, stack_b);
			else if (b_size > 1)
				rb(stack_b);
		}
		else
			ra(stack_a);
	}
}

void	push_to_a(t_stack **stack_a, t_stack **stack_b, int a_size, int b_size)
{
	while (b_size > 0)
	{
		while ((*stack_b)->index != b_size - 1)
		{
			if (ft_lstpos(*stack_b, b_size - 1) <= b_size / 2)
				rb(stack_b);
			else
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
		a_size++;
		b_size--;
	}
}

void	ksort(t_stack **stack_a, t_stack **stack_b)
{
	int a_size;
	int b_size;

	a_size = stacksize(*stack_a);
	b_size = 0;
	push_to_b(stack_a, stack_b, a_size, b_size);
	b_size = stacksize(*stack_b);
	a_size = 0;
	push_to_a(stack_a, stack_b, a_size, b_size);
}

int	ft_lstpos(t_stack *head, int position)
{
	int	i;

	i = 0;
	while (head)
	{
		if (head->index == position)
			return (i);
		head = head->next;
		i++;
	}
	return (i);
}