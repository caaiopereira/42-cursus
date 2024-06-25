/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 07:40:31 by yfellipe          #+#    #+#             */
/*   Updated: 2024/06/25 07:40:32 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_elem	*skip_spaces(t_elem *ptr, int opt)
{
	while (ptr && ptr->type == WHITE_SPACE)
	{
		if (opt)
			ptr = ptr->next;
		else
			ptr = ptr->prev;
	}
	return (ptr);
}

char	*get_redir(enum e_token type)
{
	if (type == REDIR_IN)
		return ("<");
	if (type == REDIR_OUT)
		return (">");
	if (type == HERE_DOC)
		return ("<<");
	if (type == DREDIR_OUT)
		return (">>");
	return (".");
}

t_elem	*check_unclosed_quotes(t_elem **ptr, enum e_token type)
{
	while (*ptr)
	{
		*ptr = (*ptr)->next;
		if (!*ptr || (*ptr)->type == type)
			break ;
	}
	if (!*ptr)
		write(STDERR_FILENO, "minishell: unclosed quotes detected.\n",
			ft_strlen("minishell: unclosed quotes detected.\n"));
	return (*ptr);
}

int	syntax_errors(t_list *list)
{
	t_elem	*ptr;

	ptr = list->head;
	while (ptr)
	{
		if (ptr->type == PIPE_LINE)
		{
			if (pipe_error(ptr))
				return (ft_perror("minishell: syntax error near"
						"unexpected token `|'", NULL));
		}
		else if (is_redir(ptr->type))
		{
			if (redir_error(ptr))
				return (ft_perror("minishell: syntax error near"
						"unexpected token ", get_redir(ptr->type)));
		}
		else if (ptr->type == DOUBLE_QUOTE || ptr->type == QOUTE)
		{
			if (!check_unclosed_quotes(&ptr, ptr->type))
				return (EXIT_FAILURE);
		}
		ptr = ptr->next;
	}
	return (EXIT_SUCCESS);
}
