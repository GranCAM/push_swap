/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/03/09 21:27:32 by carbon           ###   ########.fr       */
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
	splitted = parse_input(argv, argc);
	check_args(splitted);
	parsed = to_ints(splitted);
	ft_frematrix(splitted);
	check_dups(parsed, args);
	if (check_ordered(parsed, args) == 1)
		return (free(parsed), 0);
	build_stacks(&stack_a, parsed, args);
	free (parsed);
/* 	t_stack *temp;
	temp = stack_a;
	while (temp->next)
	{
		printf("num %d| index %d|\n", temp->num, temp->index);
		temp = temp->next;
	}
	printf("num %d| index %d|\n", temp->num, temp->index); */
	ksort(&stack_a, &stack_b);
/* 	temp = stack_a;
	while (temp->next)
	{
		printf("num %d| index %d|\n", temp->num, temp->index);
		temp = temp->next;
	}
	printf("num %d| index %d|\n", temp->num, temp->index); */
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
/* 	printf("real args : %d\n",real_args); */
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

char	**split_the_split(char **splitted, int args, int bad_args)
{
	int		i;
	int		j;
	int		w;
	char	**plus_splitted;
	char	**temp_split;

	i = 0;
	j = 0;
	plus_splitted = ft_calloc(sizeof(char *), args + 1);
	while (i < bad_args)
	{
		if (ft_word_count(splitted[i], ' ') == 1)
		{
			plus_splitted[j] = ft_strdup(splitted[i]);
			++j;
		}
		else
		{
			w = ft_word_count(splitted[i], ' ');
			temp_split = ft_split(splitted[i], ' ');
			while (w > 0)
			{
				plus_splitted[j + w - 1] = ft_strdup(temp_split[w - 1]);
				--w;
			}
			j = j + w;
		}
		++i;
	}
	plus_splitted[args] = 0;
	return (plus_splitted);
}

char	**parse_input_first(char **argv, int argc)
{
	char	**splitted;
	int		i;

	if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		return (splitted);
	}
	splitted = ft_calloc(sizeof(char *), argc + 1);
	i = 0;
	while (argv[++i])
		splitted[i - 1] = ft_strdup(argv[i]);
	splitted[i - 1] = 0;
	return (splitted);
}
