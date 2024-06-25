/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 07:48:38 by yfellipe          #+#    #+#             */
/*   Updated: 2024/06/25 07:48:39 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	rev(char *s, int n)
{
	int		i;
	char	tmp;

	if (n == 0)
		return ;
	i = 0;
	while (i < (n / 2))
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char			*res;
	int				i;
	unsigned int	uns_n;

	i = 0;
	uns_n = n;
	res = malloc((size(n) + 1 + (n < 0)) * sizeof(char));
	if (!res)
		return (0);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		uns_n = (n * -1);
		res[size(n)] = '-';
	}
	while (uns_n)
	{
		res[i++] = (uns_n % 10) + 48;
		uns_n /= 10;
	}
	res[size(n) + (n < 0)] = '\0';
	rev(res, size(n) + (n < 0));
	return (res);
}
