/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 07:41:12 by caiperei          #+#    #+#             */
/*   Updated: 2024/06/25 09:38:08 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	set_dir(t_env *ev, char *cwd, char *owd)
{
	t_env_elem	*env_elem;

	env_elem = search_env_elem(ev, "PWD");
	if (!env_elem)
		return ;
	env_elem->value = ft_strdup(cwd);
	env_elem = search_env_elem(ev, "OLDPWD");
	if (!env_elem)
		return ;
	env_elem->value = ft_strdup(owd);
}

int	ft_cd(t_cmd *cmd, char ***env)
{
	t_env		*ev;
	char		cwd[1024];
	char		owd[1024];

	ev = create_env(*env);
	getcwd(owd, sizeof(owd));
	if (!cmd->args[1])
	{
		if (chdir(expand_env("$HOME", *env)) != 0)
			return (ft_puterr(cmd->args[0],
					expand_env("$HOME", *env), NULL, 1));
	}
	else
	{
		if (chdir(cmd->args[1]) != 0)
			return (ft_puterr(cmd->args[0], cmd->args[1], NULL, 1));
	}
	getcwd(cwd, sizeof(cwd));
	set_dir(ev, cwd, owd);
	*env = convert_array(ev);
	g_data.exit_status = EXIT_SUCCESS;
	return (EXIT_SUCCESS);
}
