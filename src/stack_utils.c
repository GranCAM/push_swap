/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:11:54 by carbon            #+#    #+#             */
/*   Updated: 2025/02/24 16:43:33 by carbon-m         ###   ########.fr       */
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

/* void	fill_stack(t_stack *stack, int *parsed, int args)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = (t_stack *)malloc(sizeof(t_stack));
	if (!temp)
		return ;
	temp = stack;
	temp->next = NULL;
	temp->ssize = args;
	while (i < args)
	{
		temp->num = parsed[i];
		temp->index = 0;
		temp = temp->next;
		++i;
	}
} */

/* void	push_node(t_stack *stack, int value)
{
	t_stack	*temp;

	temp = (t_stack *)malloc(sizeof(t_stack));
	if (!temp)
		return ;
    temp->next = stack;
    stack = temp;
	temp->num = value;
	temp->index = 0;
} */



void	get_index(t_stack *stack_a, int *parsed)
{
    int	    i;
    t_stack	*temp;

    temp = (t_stack *)malloc(sizeof(t_stack));
	if (!temp)
		return ;
    temp = stack_a;
    while (temp)
	{
        i = 0;
        while (parsed[i] != temp->num)
            i++;
        temp->index = i;
        temp = temp->next;
    }
}
