/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:39:05 by carbon-m          #+#    #+#             */
/*   Updated: 2025/03/08 19:15:03 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse_input(char **argv, int argc)
{
	char	**splitted;
	char	**final_splitted;
	int		i;
	int		args;
	int		bad_args;

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
	args = count_args(splitted, argc, argv);
	bad_args = blunt_args(argc, argv);
	final_splitted = split_the_split(splitted, args, bad_args);
	return (final_splitted);
}

void	check_args(char **splitted)
{
	int		i;
	int		j;

	i = -1;
	while (splitted[++i])
	{
		j = 0;
		while (splitted[i][j])
		{
			if ((!(ft_isdigit(splitted[i][j])) && (splitted[i][j] != '-'
				&& splitted[i][j] != '+'))
				|| (splitted[i][j] == '-' && !(ft_isdigit(splitted[i][j + 1])))
				|| (splitted[i][j] == '+' && !(ft_isdigit(splitted[i][j + 1]))))
			{
				ft_putstr_fd("Error\n", 1);
				exit (1);
			}
			++j;
		}
	}
}

int	*to_ints(char **splitted)
{
	int		i;
	int		j;
	int		*parsed;
	long	num;

	i = 0;
	while (splitted[i])
		++i;
	parsed = ft_calloc(sizeof(int), i + 1);
	j = 0;
	while (j < i)
	{
		num = ft_atol(splitted[j]);
		if (num > 2147483647 || num < -2147483648)
		{
			ft_putstr_fd("Error\n", 1);
			exit (1);
		}
		parsed[j] = ft_atoi(splitted[j]);
		++j;
	}
	parsed[j] = 0;
	return (parsed);
}

void	check_dups(int *parsed, int args)
{
	int	i;
	int	j;

	i = 0;
	while (i <= args - 1)
	{
		j = i + 1;
		while (j <= args - 1)
		{
			if (parsed[i] == parsed[j])
			{
				ft_putstr_fd("Error\n", 1);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
