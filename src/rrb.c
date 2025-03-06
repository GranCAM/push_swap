/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:51:57 by carbon            #+#    #+#             */
/*   Updated: 2025/03/04 19:09:58 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **stack_b)
{
    t_stack *temp;
    t_stack *temp2;
    
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
