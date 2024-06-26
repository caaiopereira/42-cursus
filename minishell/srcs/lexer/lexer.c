/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 07:44:50 by yfellipe          #+#    #+#             */
/*   Updated: 2024/06/25 07:44:56 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	print_node(t_elem *node)
{
	int	i;

	i = 0;
	printf("content: ");
	while (i < node->len)
		putchar(node->content[i++]);
	printf(", len: %i", node->len);
	printf(", state: %i", node->state);
	printf(", token: %i\n", node->type);
}

void	print_list(t_list *list)
{
	t_elem	*node;

	node = list->head;
	while (node)
	{
		print_node(node);
		node = node->next;
	}
}

int	tokenize_redir(t_list *tokens, char *line, int i, enum e_state *state)
{
	int	j;

	j = i;
	if (line[i] == '<')
	{
		if (line[i + 1] == '<')
			add_tail(tokens, new_elem(line + (i++), 2, HERE_DOC, *state));
		else
			add_tail(tokens, new_elem(line + (i), 1, REDIR_IN, *state));
		i++;
	}
	else if (line[i] == '>')
	{
		if (line[i + 1] == '>')
			add_tail(tokens, new_elem(line + (i++), 2, DREDIR_OUT, *state));
		else
			add_tail(tokens, new_elem(line + (i), 1, REDIR_OUT, *state));
		i++;
	}
	return (i - j);
}

int	tokenize(t_list *tokens, char *line, int i, enum e_state *state)
{
	if (!in_charset(line[i]))
		i += get_word(tokens, line + i, *state);
	else if (line[i] == '\'')
		quotes_state(tokens, line + (i++), state, 1);
	else if (line[i] == '\"')
		quotes_state(tokens, line + (i++), state, 2);
	else if (line[i] == '$')
	{
		if (in_charset(line[i + 1]) || line[i + 1] == '=')
		{
			add_tail(tokens, new_elem(line + i, 1, WORD, *state));
			i++;
		}
		else
			i += get_env_var(tokens, line + i, *state);
	}
	else if (line[i] == '>' || line[i] == '<')
		i += tokenize_redir(tokens, line, i, state);
	else if (line[i] == '|')
		add_tail(tokens, new_elem(line + (i++), 1, PIPE_LINE, *state));
	else if (ft_isspace(line[i]))
		add_tail(tokens, new_elem(line + (i++), 1, WHITE_SPACE, *state));
	return (i);
}

t_list	*lexer(char *line)
{
	int				i;
	t_list			*tokens;
	enum e_state	state;

	i = 0;
	state = GENERAL;
	tokens = NULL;
	tokens = init_list(tokens);
	if (tokens)
	{
		while (line[i])
		{
			i = tokenize(tokens, line, i, &state);
		}
	}
	free(line);
	return (tokens);
}
