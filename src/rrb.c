/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:39:47 by carbon-m          #+#    #+#             */
/*   Updated: 2025/03/08 12:40:31 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = *stack_b;
	while (temp->next)
	{
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = NULL;
	temp->next = *stack_b;
	*stack_b = temp;
	write(1, "rrb\n", 4);
}
