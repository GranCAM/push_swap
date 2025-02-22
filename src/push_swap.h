/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon <carbon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:02 by carbon-m          #+#    #+#             */
/*   Updated: 2025/02/22 19:14:34 by carbon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	struct s_stack	*head;
	struct s_stack	*next;
	int				num;
	int				index;
	int				ssize;
}	t_stack;

void	ra(t_stack stack_a);
void	rb(t_stack stack_b);
void	rr(t_stack stack_a, t_stack stack_b);
void	sa(t_stack stack_a);
void	sb(t_stack stack_b);
void	ss(t_stack stack_a, t_stack stack_b);
void	rra(t_stack stack_a);
void	rrb(t_stack stack_b);
void	rrr(t_stack stack_a, t_stack stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
char	**parse_input(int argc, char **argv);
void	check_args(char **argv);
int		*to_ints(char **splitted);
void	check_dups(int *parsed);
void	build_stacks(t_stack *stack_a, t_stack *stack_b, int *parsed);
void	fill_stack(t_stack *stack, int value);
void	get_index(t_stack *stack_a, int *parsed);

#endif