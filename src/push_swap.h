/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:05:02 by carbon-m          #+#    #+#             */
/*   Updated: 2025/03/08 19:30:28 by carbon-m         ###   ########.fr       */
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
	struct s_stack	*next;
	int				num;
	int				index;
}	t_stack;

void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
char	**parse_input(char **argv, int args);
void	check_args(char **argv);
int		*to_ints(char **splitted);
void	check_dups(int *parsed, int args);
void	build_stacks(t_stack **stack_a, int *parsed, int args);
void	fill_stack(t_stack *stack, int *parsed, int arg);
void	get_index(t_stack *stack_a, int *parsed);
t_stack	*stack_new(int value);
void	add_front(t_stack **stack, t_stack *new);
void	add_back(t_stack **stack, t_stack *new);
t_stack	*stacklast(t_stack *stack);
int		stacksize(t_stack *stack);
void	stack_del(t_stack **stack);
void	del_node(t_stack *stack);
void	ksort(t_stack **list_a, t_stack **list_b);
void	push_to_a(t_stack **list_a, t_stack **list_b, int a_size, int b_size);
void	push_to_b(t_stack **list_a, t_stack **list_b, int a_size, int b_size);
int		get_sqrt(int nbr);
int		ft_lstpos(t_stack *head, int position);
void	ksort_to_b(t_stack **stack_a, t_stack **stack_b, int len);
int		max_node_pos(t_stack **stack_b, int b_size);
void	three_num(t_stack **stack_a, int a_size);
void	four_num(t_stack **stack_a, t_stack **stack_b, int a_size);
void	five_num(t_stack **stack_a, t_stack **stack_b, int a_size);
int		check_ordered(int *parsed, int args);
void	check_empty(char **splitted);
void	two_num(t_stack **stack_a);
int		count_args(char **splitted, int argc, char **argv);
char	**split_the_split(char **splitted, int args, int bad_args);
int		blunt_args(int argc, char **argv);
char	**parse_input_first(char **argv, int argc);

#endif