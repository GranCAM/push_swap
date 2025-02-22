/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:39:05 by carbon-m          #+#    #+#             */
/*   Updated: 2025/02/21 19:25:22 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**parse_input(int argc, char **argv)
{
	char 	**splitted;
	int		i;

	if (argc < 2)
		exit(1);
	if (argc == 2)
		return (splitted = ft_split(argv[1], ' '), splitted);
	splitted = ft_calloc(sizeof(char *), argc);
	i = 0;
	while (argv[++i])
		splitted[i - 1] = ft_strdup(argv[i]);
	splitted[i - 1] = 0;
	i = 0;
	return (splitted);
}

void	check_args(char **splitted)
{
	int		i;
	int		j;

	i = -1;
	while (splitted[++i])
	{
		j = -1;
		while(splitted[i][++j])
		{
			if ((!(ft_isdigit(splitted[i][j])) && (splitted[i][j] != '-' 
			&& splitted[i][j] != '+'))
			|| (splitted[i][j] == '-' && !(ft_isdigit(splitted[i][j + 1])))
			|| (splitted[i][j] == '+' && !(ft_isdigit(splitted[i][j + 1]))))
			{
				ft_putstr_fd("Error\n", 1);
				exit (1);
			}
		}
	}
}

int	*to_ints(char **splitted)
{
	int		i;
	int		j;
	int		*parsed;
	long	num;

	i = -1;
	while (splitted[++i])
	parsed = ft_calloc(sizeof(int), i);
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

void	check_dups(int *parsed)
{
	int	i;
	int	j;
	int	args;

	i = 0;
	while (parsed[i++])
		++args;
	i = 0;
	while (i <= args)
	{
		j = i + 1;
		while (j <= args)
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
