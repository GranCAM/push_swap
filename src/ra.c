/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:32 by carbon-m          #+#    #+#             */
/*   Updated: 2025/03/08 12:46:25 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*last;

	temp = *stack_a;
	*stack_a = temp->next;
	temp->next = NULL;
	last = stacklast(*stack_a);
	last->next = temp;
	write(1, "ra\n", 3);
}
