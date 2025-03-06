/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:51:45 by carbon            #+#    #+#             */
/*   Updated: 2025/03/04 18:42:33 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack **stack_b)
{
    t_stack *temp;
    t_stack *last;

    temp = *stack_b;
    *stack_b = temp->next;
    temp->next = NULL;
    last = stacklast(*stack_b);
    last->next = temp;
    write(1, "rb\n", 3);
}