/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/02/28 20:47:22 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    char	**splitted;
	int		*parsed;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	splitted = parse_input(argc, argv);
	check_args(splitted);
	parsed = to_ints(splitted);
	ft_frematrix(splitted);
	check_dups(parsed);
	build_stacks(&stack_a, parsed);
	free (parsed);
	int i = 0;
	int size = stacksize(stack_a);
	t_stack *temp = stack_a;
	while (i < size)
	{
		printf("num: %d, index: %d\n",temp->num,temp->index);
		temp = temp->next;
		++i;
	}
	ksort(&stack_a, &stack_b);
	stack_del(&stack_a);
	stack_del(&stack_b);
	return (0);
}
