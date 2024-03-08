/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:10:27 by caiperei          #+#    #+#             */
/*   Updated: 2024/03/08 13:10:30 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ((void) NULL);
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

static t_list	**setup_stack(void)
{
	t_list	**new_stack;

	new_stack = (t_list **)malloc(sizeof(t_list));
	if (!new_stack)
		return (NULL);
	*new_stack = NULL;
	return (new_stack);
}

static void	free_stacks(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
}

static void	check_sorted(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		exit (-1);
	}
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if ((argc < 2) || (argc == 2 && (count_nums(argv[1], ' ') == 1)))
		return (-1);
	check_args(argv, argc);
	stack_a = setup_stack();
	stack_b = setup_stack();
	init_stack(stack_a, argc, argv);
	check_sorted(stack_a, stack_b);
	sort_stack(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	return (0);
}
