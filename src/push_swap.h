/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:02 by carbon-m          #+#    #+#             */
/*   Updated: 2025/02/13 20:31:06 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include "../libft/libft.h"

typedef struct s_node
{
	void			*content;
	int				pos;
	struct p_list	*next;
}	t_node;

void	ra(t_node list_a);
void	rb(t_node list_b);
void	rr(t_node list_a, t_node list_b);
void	sa(t_node list_a);
void	sb(t_node list_b);
void	ss(t_node list_a, t_node list_b);
void	rra(t_node list_a);
void	rrb(t_node list_b);
void	rrr(t_node list_a, t_node list_b);
void	pa(t_node list_a, t_node list_b);
void	pb(t_node list_a, t_node list_b);
char	**parse_input(int argc, char **argv);
int		check_args(char **argv);

#endif