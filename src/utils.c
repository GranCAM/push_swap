/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:39:05 by carbon-m          #+#    #+#             */
/*   Updated: 2025/02/18 12:49:14 by carbon-m         ###   ########.fr       */
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
	i = 0;
	while (argv[++i])
	splitted = ft_calloc(sizeof(char *), i);
	i = 0;
	while (argv[++i])
	{
		printf("%s",argv[i]);
		splitted[i] = ft_strdup(argv[i]);
	}
	splitted[i + 1] = ft_calloc(1, 1);
	return (splitted);
}

int	check_args(char **argv)
{
	int		i;
	int		j;

	i = -1;
	while (argv[++i])
	{
		j = -1;
		while(argv[i][++j])
		{
			printf("%c", argv[i][j]);
			if ((!(ft_isdigit(argv[i][j])) && (argv[i][j] != '-' 
			&& argv[i][j] != '+'))
			|| (argv[i][j] == '-' && argv[i][j + 1] == 0)
			|| (argv[i][j] == '+' && argv[i][j + 1] == 0))
				return(ft_putstr_fd("Error\n", 1), 0);
		}
	}
	return (1);
}
