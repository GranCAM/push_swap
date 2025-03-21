/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/03/11 14:45:58 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**splitted;
	int		*parsed;
	int		args;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if ((argc == 2 && ft_strlen(argv[1]) == 0) || argc < 2)
		return (ft_putendl_fd("Error", 2), 1);
	stack_a = NULL;
	stack_b = NULL;
	splitted = parse_input_first(argv, argc);
	args = count_args(splitted, argc, argv);
	splitted = parse_input(argv, argc, splitted);
	check_args(splitted);
	parsed = to_ints(splitted, args);
	check_dups(parsed, args);
	if (check_ordered(parsed, args) == 1)
		return (free(parsed), 0);
	build_stacks(&stack_a, parsed, args);
	ksort(&stack_a, &stack_b);
	stack_del(&stack_a);
	stack_del(&stack_b);
	return (0);
}

int	count_args(char **splitted, int argc, char **argv)
{
	int	i;
	int	args;
	int	real_args;

	real_args = 0;
	i = 0;
	args = blunt_args(argc, argv);
	while (i < args)
	{
		real_args = real_args + ft_word_count(splitted[i], ' ');
		++i;
	}
	return (real_args);
}

int	blunt_args(int argc, char **argv)
{
	int	args;

	if (argc == 2)
		args = ft_word_count(argv[1], ' ');
	else
		args = argc - 1;
	return (args);
}

char	**parse_input_first(char **argv, int argc)
{
	char	**splitted;
	int		i;

	if (argc == 2)
	{
		if (ft_word_count(argv[1], ' ') == 0)
		{
			ft_putstr_fd("Error\n", 1);
			exit (1);
		}
		return (splitted = ft_split(argv[1], ' '), splitted);
	}
	splitted = ft_calloc(sizeof(char *), argc + 1);
	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 0 || ft_word_count(argv[1], ' ') == 0)
		{
			ft_putstr_fd("Error\n", 1);
			exit (1);
		}
		splitted[i - 1] = ft_strdup(argv[i]);
		++i;
	}
	return (splitted);
}
