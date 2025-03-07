/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:29:40 by carbon            #+#    #+#             */
/*   Updated: 2025/03/07 11:45:26 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_ordered(t_stack **stack_a)
{
	t_stack *next;
    t_stack *temp;

	temp = (*stack_a);
	next = (*stack_a)->next;
    while (temp->next)
    {
		next = next->next;
		if ((*stack_a)->index > next->index) 
            return (0);
		temp = temp->next;
    }
	return (1);
}

void	three_num(t_stack **stack_a, int a_size)
{
	int	max_index;

	max_index = max_node_pos(stack_a, a_size);
	if (max_index == 0)
	{
		rra(stack_a);
		if ((*stack_a)->index > (*stack_a)->next->index)
			sa(stack_a);
		return ;
	}
	if (max_index == 1)
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
	printf("%d\n", max_index);
	if (max_index == 0)
		sa(stack_a);
	else if (max_index == 1)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (max_index == 2)
		rra(stack_a);
	pb(stack_a, stack_b);
	three_num(stack_a, a_size);
	pa(stack_a, stack_b);
	ra(stack_a);
	return ;
}

void	five_num(t_stack **stack_a, t_stack **stack_b, int a_size)
{
	int	max_index;

	max_index = max_node_pos(stack_a, a_size);
	if (max_index == 0)
		sa(stack_a);
	else if (max_index == 1)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (max_index == 2)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (max_index == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	four_num(stack_a, stack_b, a_size);
	pa(stack_a, stack_b);
	ra(stack_a);
	return ;
}
