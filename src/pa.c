/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:21 by carbon            #+#    #+#             */
/*   Updated: 2025/02/22 19:18:44 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *temp;

    temp = malloc (sizeof(t_stack));
    temp->next = stack_b->head;
    temp = temp->next;
    stack_b->head = temp->next;
    temp->next = stack_a->head;
}
