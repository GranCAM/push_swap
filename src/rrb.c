/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:51:57 by carbon            #+#    #+#             */
/*   Updated: 2025/02/28 10:33:55 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **stack_b)
{
    t_stack *temp;
    t_stack *last;

    temp = *stack_b;
    *stack_b = temp->next;
    temp->next = NULL;
    last = stacklast(*stack_b);
    last->next = temp;
    ft_putendl_fd("rrb", 1);
}