/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:17 by carbon            #+#    #+#             */
/*   Updated: 2025/02/23 17:09:00 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *temp;

    temp = malloc (sizeof(t_stack));
    temp->next = stack_a;
    temp = temp->next;
    stack_a = temp->next;
    temp->next = stack_b;
}