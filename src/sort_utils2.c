/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:29:40 by carbon            #+#    #+#             */
/*   Updated: 2025/03/06 14:45:42 by carbon           ###   ########.fr       */
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

void	three_stack(t_stack **stack_a, t_stack **stack_b)
{
	if ()
}
