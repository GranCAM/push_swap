/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:51:45 by carbon            #+#    #+#             */
/*   Updated: 2025/03/03 16:22:37 by carbon-m         ###   ########.fr       */
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
    ft_putendl_fd("rb", 1);
}