/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:51:51 by carbon            #+#    #+#             */
/*   Updated: 2025/03/04 19:09:26 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *temp;
    t_stack *last;
    t_stack *temp2;
    t_stack *last2;

    temp = *stack_a;
    *stack_a = temp->next;
    temp->next = NULL;
    last = stacklast(*stack_a);
    last->next = temp;
    temp2 = *stack_b;
    *stack_b = temp2->next;
    temp2->next = NULL;
    last2 = stacklast(*stack_b);
    last2->next = temp2;
    write(1, "rr\n", 3);
}