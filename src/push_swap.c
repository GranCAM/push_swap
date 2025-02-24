/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/02/24 17:26:44 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    char	**splitted;
	int		*parsed;
	t_stack	*stack_a;
	t_stack	*stack_b;

	splitted = parse_input(argc, argv);
	check_args(splitted);
	parsed = to_ints(splitted);
	ft_frematrix(splitted);
	check_dups(parsed);
	build_stacks(&stack_a, parsed);
	free (parsed);
	printf("%d top a\n",stack_a->num);
	pb(&stack_a,&stack_b);
	printf("pb %d top a\n%d top b\n",stack_a->num, stack_b->num);
	pb(&stack_a,&stack_b);
	printf("pb %d top a\n%d top b\n",stack_a->num, stack_b->num);
	ra(&stack_a);
	printf("ra %d top a\n%d top b\n",stack_a->num, stack_b->num);
	ra(&stack_a);
	printf("ra %d top a\n%d top b\n",stack_a->num, stack_b->num);
	rb(&stack_b);
	printf("rb %d top a\n%d top b\n",stack_a->num, stack_b->num);
	rb(&stack_b);
	printf("rb %d top a\n%d top b\n",stack_a->num, stack_b->num);
	return (0);
}
