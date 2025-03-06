/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:13:22 by carbon            #+#    #+#             */
/*   Updated: 2025/03/05 18:20:33 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	size_t	count_arr;
	int		i;

	count_arr = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != 0)
				i++;
			count_arr++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (count_arr);
}
