/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:51:54 by carbon            #+#    #+#             */
/*   Updated: 2025/02/26 21:44:50 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack_a)
{
    t_stack *temp;
    t_stack *last;

    temp = *stack_a;
    *stack_a = temp->next;
    temp->next = NULL;
    last = stacklast(*stack_a);
    last->next = temp;
}
