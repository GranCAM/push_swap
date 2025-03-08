/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:51:54 by carbon            #+#    #+#             */
/*   Updated: 2025/03/08 12:47:39 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = *stack_a;
	while (temp->next)
	{
		temp2 = temp;
		temp = temp->next;
	}
	temp2->next = NULL;
	temp->next = *stack_a;
	*stack_a = temp;
	ft_putendl_fd("rra", 1);
}
