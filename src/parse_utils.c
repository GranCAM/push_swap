/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:39:05 by carbon-m          #+#    #+#             */
/*   Updated: 2025/03/11 14:48:40 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse_input(char **argv, int argc, char **splitted)
{
	char	**final_splitted;
	int		args;
	int		bad_args;

	args = count_args(splitted, argc, argv);
	bad_args = blunt_args(argc, argv);
	final_splitted = split_the_split(splitted, args, bad_args);
	ft_freematrix_args(splitted, bad_args);
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

int	*to_ints(char **splitted, int args)
{
	int		i;
	int		*parsed;
	long	num;


	parsed = ft_calloc(sizeof(int), args + 1);
	i = 0;
	while (i < args)
	{
		num = ft_atol(splitted[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			ft_putstr_fd("Error\n", 1);
			exit (1);
		}
		parsed[i] = ft_atoi(splitted[i]);
		++i;
	}
	parsed[i] = 0;
	ft_freematrix_args(splitted, args);
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
