/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:11:54 by carbon            #+#    #+#             */
/*   Updated: 2025/02/23 17:05:09 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	build_stacks(t_stack *stack_a, t_stack *stack_b, int *parsed)
{
	int		i;
    int     args;

    i = 0;
	args = 0;
    while(parsed[i])
    {
        ++i;
        ++args;
    }
	stack_a->ssize = args;
	stack_b->ssize = 0;
	while (i >= 0)
	{
		fill_stack(stack_a, parsed[i]);
		i--;
	}
	ft_bubble_sort(parsed);
	get_index(stack_a, parsed);
}

void	fill_stack(t_stack *stack, int value)
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		return ;
    tmp->next = stack;
    stack = tmp;
	tmp->num = value;
	tmp->index = 0;
}

void	get_index(t_stack *stack_a, int *parsed)
{
    int	    i;
    t_stack	*tmp;

    tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		return ;
    tmp->next = stack_a;
    while (tmp)
	{
        i = 0;
        while (parsed[i] != tmp->num)
            i++;
        tmp->index = i;
        tmp = tmp->next;
    }
}
