/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:02 by carbon-m          #+#    #+#             */
/*   Updated: 2025/02/05 22:25:01 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	int				pos;
}	t_list;

void	ra(t_list list_a);
void	rb(t_list list_b);
void	rr(t_list list_a, t_list list_b);
void	sa(t_list list_a);
void	sb(t_list list_b);
void	ss(t_list list_a, t_list list_b);
void	rra(t_list list_a);
void	rrb(t_list list_b);
void	rrr(t_list list_a, t_list list_b);
void	pa(t_list list_a, t_list list_b);
void	pb(t_list list_a, t_list list_b);

#endif