/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/03/07 19:05:47 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    char	**splitted;
	int		*parsed;
	int		args;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	splitted = parse_input(argc, argv);
	check_args(splitted);
	if (argc == 2)
		args = ft_word_count(argv[1], ' ');
	else
		args = argc - 1;
	parsed = to_ints(splitted);
	ft_frematrix(splitted);
	check_dups(parsed, args);
	if (check_ordered(parsed, args) == 1)
		return(free(parsed), 0);
	build_stacks(&stack_a, parsed, args);
	free (parsed);
	ksort(&stack_a, &stack_b);
	stack_del(&stack_a);
	stack_del(&stack_b);
	return (0);
}
