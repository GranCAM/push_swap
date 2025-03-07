/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:11:54 by carbon            #+#    #+#             */
/*   Updated: 2025/03/07 11:40:33 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	build_stacks(t_stack **stack_a, int *parsed, int args)
{
	t_stack	*stack;
	int		i;

	i = args;
	while (i > 0)
	{
		stack = stack_new(parsed[i - 1]);
		add_front(stack_a, stack);
		--i;
	}
	ft_bubble_sort(parsed, args);
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

int	max_node_pos(t_stack **stack_b, int b_size)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *stack_b;
	while(temp->index != b_size -1 && temp->next)
	{
		temp = temp->next;
		++i;
	}
	return(i);
}
