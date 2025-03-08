/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:29:40 by carbon            #+#    #+#             */
/*   Updated: 2025/03/08 12:34:45 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_ordered(int *parsed, int args)
{
	int	i;

	i = 1;
	while (i < args)
	{
		if (parsed[i] > parsed[i - 1])
			++i;
		else
			return (0);
	}
	return (1);
}

void	three_num(t_stack **stack_a, int a_size)
{
	int	max_index;

	max_index = max_node_pos(stack_a, a_size);
	if (max_index == 1)
	{
		rra(stack_a);
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a);
		return ;
	}
	if (max_index == 2)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a);
		return ;
	}
	ra(stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	four_num(t_stack **stack_a, t_stack **stack_b, int a_size)
{
	int	max_index;

	max_index = max_node_pos(stack_a, a_size);
	if (max_index == 1)
		sa(stack_a);
	else if (max_index == 2)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (max_index == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	a_size--;
	three_num(stack_a, a_size);
	pa(stack_a, stack_b);
	ra(stack_a);
}

void	five_num(t_stack **stack_a, t_stack **stack_b, int a_size)
{
	int	max_index;

	max_index = max_node_pos(stack_a, a_size);
	if (max_index == 1)
		sa(stack_a);
	else if (max_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (max_index == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (max_index == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	a_size--;
	four_num(stack_a, stack_b, a_size);
	pa(stack_a, stack_b);
	ra(stack_a);
}

void	two_num(t_stack **stack_a)
{
	if ((*stack_a)->index == 0)
		return ;
	else
		ra (stack_a);
}
