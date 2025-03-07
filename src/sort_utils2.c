/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:29:40 by carbon            #+#    #+#             */
/*   Updated: 2025/03/06 19:15:05 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_ordered(t_stack **stack_a, int args)
{
	t_stack *next;
    t_stack *temp;
	int	args;

	temp = (*stack_a);
	next = (*stack_a)->next;
    while (temp->next)
    {
		next = next->next;
		if ((*stack_a)->index > next) 
            return (0);
		temp = temp->next;
    }
}
/* 
void	three_nums(t_stack **stack_a, int a_size)
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
	return ;
}

void	four_nums(t_stack **stack_a, t_stack **stack_b, int a_size)
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
	ps_three_nodes(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
}

void	five_nums(t_stack **stack_a, t_stack **stack_b, int a_size)
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
	ps_four_nodes(stack_a, stack_b);
	pa(stack_a, stack_b);
	ra(stack_a);
	return ;
}
 */