/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 19:52:26 by carbon            #+#    #+#             */
/*   Updated: 2025/02/18 12:49:54 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    char	**splitted;

	int i = 0;
	splitted = parse_input(argc, argv);
	i = -1;
	while (splitted[++i])
		printf("%s",splitted[i]);
	if (!check_args(splitted))
		exit (1);
	ft_putstr_fd("benne", 1);
	free (splitted);
	return (0);
}