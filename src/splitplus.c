/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitplus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:21:47 by carbon-m          #+#    #+#             */
/*   Updated: 2025/03/11 18:28:47 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_the_split(char **splitted, int args, int bad_args)
{
	int		i;
	char	**final_splitted;

	i = -1;
	final_splitted = ft_calloc(sizeof(char *), args + 1);
	final_splitted = cleaned_split(splitted, final_splitted, bad_args, i);
	final_splitted[args] = 0;
	return (final_splitted);
}

char	**cleaned_split(char **splitted, char **plus_splitted, int bad_args,
		int i)
{
	char	**temp_split;
	int		w;
	int		j;

	j = 0;
	while (++i < bad_args)
	{
		if (ft_word_count(splitted[i], ' ') == 1)
		{
			temp_split = ft_split((splitted[i]), ' ');
			plus_splitted[j] = ft_strdup(temp_split[0]);
			j++;
		}
		else
		{
			w = ft_word_count(splitted[i], ' ') + 1;
			temp_split = ft_split(splitted[i], ' ');
			while (--w > 0)
				plus_splitted[j + w - 1] = ft_strdup(temp_split[w - 1]);
			w = ft_word_count(splitted[i], ' ');
			j = j + w;
		}
		ft_freematrix_args(temp_split, ft_word_count(splitted[i], ' '));
	}
	return (plus_splitted);
}
