/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalero <lcalero@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:29:26 by lcalero           #+#    #+#             */
/*   Updated: 2024/12/18 15:21:05 by lcalero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int i;
	
	size_a = 0;
	stack_a = parse_input(ac, av, &size_a);
	if (!stack_a || !check_duplicates(stack_a, size_a) || !size_a
		|| !check_wrong_minus(ac, av))
		print_error();
	stack_b = malloc(size_a * sizeof(int));
	if (is_sorted(ac, av))
		return (0);
	i = 0;
	while (i < size_a)
	{
		printf("%d\n", stack_a[i]);
		i++;
	}
	printf("------------------------\n");
	assign_corresponding_nu(stack_a, size_a);
	i = 0;
	while (i < size_a)
	{
		printf("%d\n", stack_a[i]);
		i++;
	}
	free(stack_a);
	free(stack_b);
	return (0);
}
