/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbayrakt <tbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:22:26 by tbayrakt          #+#    #+#             */
/*   Updated: 2024/06/24 16:32:31 by tbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack_node *a;
	t_stack_node *b;

	a = NULL;
	b = NULL;
	// Chek for incorrect argument count or if the 2 argument is '0'
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		// Call split() to extract each substring
	}
	// Initiate stack 'a', which also handles errors
	// Check if the stack is not sorted
	// If not, and there are two numbers, swap the first two nodes
	// If not and there are three numbers, call the sort three algorithm
	// If not and there are more than three numbers, call the sort stacks algorithm
	// Clean up the stack
	return (0);
}