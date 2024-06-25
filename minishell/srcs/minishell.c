/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 07:40:16 by yfellipe          #+#    #+#             */
/*   Updated: 2024/06/25 07:40:18 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	init_data(t_data *data)
{
	data->exit_status = 0;
	data->which = 0;
	data->pid = 0;
	data->tree = NULL;
	data->ev = NULL;
	data->alloc = 0;
}

t_data	g_data;

int	main(int ac, char **av, char **env)
{
	(void)av;
	if (ac != 1 || !*env)
		return (1);
	init_data(&g_data);
	init_sigaction(&g_data);
	lunch_program(env);
	return (0);
}
