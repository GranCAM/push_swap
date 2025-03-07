/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/03/07 12:16:52 by carbon-m         ###   ########.fr       */
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
	build_stacks(&stack_a, parsed, args);
	free (parsed);
	ksort(&stack_a, &stack_b);
	stack_del(&stack_a);
	stack_del(&stack_b);
	return (0);
}
