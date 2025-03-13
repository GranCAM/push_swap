/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freematrix_args.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:27:57 by carbon-m          #+#    #+#             */
/*   Updated: 2025/03/11 21:07:34 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freematrix_args(char **all, int args)
{
	int	i;

	i = 0;
	while (i < args)
	{
		free(all[i]);
		++i;
	}
	free(all);
}
