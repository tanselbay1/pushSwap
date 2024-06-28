/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselbayraktaroglu <tanselbayraktarogl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:09:42 by tanselbayra       #+#    #+#             */
/*   Updated: 2024/06/28 15:50:44 by tanselbayra      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#include <limits.h>	//To define MIN and MAX macros
#include <stdbool.h> //To use bool flags, e.g, to print or not to print

typedef struct s_stack_node
// A container of data enclosed in {} braces. `s_` for struct
{
	int nbr;				 // The number to sort
	int index;			 // The number's position in the stack
	int push_cost;		 // How many commands in total
	bool above_median; // Used to calculate `push_cost`
	bool cheapest;
	// The node that is the cheapest to do commands
	struct s_stack_node *target_node;
	// The target node of a node in the opposite stack
	struct s_stack_node *next; // A pointer to the next node
	struct s_stack_node *prev; // A pointer to the previous node
} t_stack_node;					// The "shortened name", "t_stack_node". `t_` for type

//***Commands
void sa(t_stack_node **a, bool print);
void sb(t_stack_node **b, bool print);
void ss(t_stack_node **a, t_stack_node **b, bool print);
void pa(t_stack_node **a, t_stack_node **b, bool print);
void pb(t_stack_node **b, t_stack_node **a, bool print);
void ra(t_stack_node **a, bool print);
void rb(t_stack_node **b, bool print);
void rr(t_stack_node **a, t_stack_node **b, bool print);

#endif