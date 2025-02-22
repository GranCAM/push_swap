/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:09:14 by carbon            #+#    #+#             */
/*   Updated: 2025/02/21 19:28:12 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bubble_sort(int *str) 
{
    int swapped;
    int i;
    int n;
    int temp;

    n = 0;
	while (str[n])
		++n;
    swapped = 1;
    while (swapped)
    {
        swapped = 0;
        i = 0;
        while (i < n - 1) 
        {
            if (str[i] > str[i + 1]) 
            {
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
    }
}
