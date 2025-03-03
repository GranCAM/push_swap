/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:11:54 by carbon            #+#    #+#             */
/*   Updated: 2025/03/02 18:30:20 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	build_stacks(t_stack **stack_a, int *parsed)
{
	int		i;
    int     args;
	t_stack	*stack;

    i = 0;
	args = 0;
    while(parsed[i])
    {
        ++i;
        ++args;
    }
	while (i > 0)
	{
		stack = stack_new(parsed[i - 1]);
		add_front(stack_a, stack);
		--i;
	}
	ft_bubble_sort(parsed);
	get_index(*stack_a, parsed);
}

void	get_index(t_stack *stack_a, int *parsed)
{
    int	    i;
	int		size;

	size = stacksize(stack_a);
    while (size >= 1)
	{
        i = 0;
        while (parsed[i] != stack_a->num)
            i++;
        stack_a->index = i;
        stack_a = stack_a->next;
		--size;
    }
}

void	del_node(t_stack *stack)
{
	if (stack != NULL)
		free(stack);
}

void	stack_del(t_stack **stack)
{
	t_stack	*temp;

	if (stack == NULL || *stack == NULL)
		return ;
	while (*stack != NULL)
	{
		temp = (*stack)->next;
		del_node(*stack);
		*stack = temp;
	}
}
