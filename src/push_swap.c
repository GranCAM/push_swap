/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/02/22 19:46:18 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    char	**splitted;
	int		*parsed;
	t_stack	*stack_a = malloc(sizeof(t_stack));
	t_stack	*stack_b = malloc(sizeof(t_stack));

	splitted = parse_input(argc, argv);
	check_args(splitted);
	parsed = to_ints(splitted);
	ft_frematrix(splitted);
	check_dups(parsed);
	build_stacks(stack_a, stack_b, parsed);
	free (parsed);
	t_stack *temp;
	temp = malloc(sizeof(t_stack));
	temp = stack_a->head;
	t_stack *temp2;
	temp2 = malloc(sizeof(t_stack));
	temp2 = stack_b->head;
	printf("%d top a %d top b\n",temp->num, temp2->num);
	pb(stack_a,stack_b);
	return (0);
}
