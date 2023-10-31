/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:38 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:31:58 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Escreve uma string seguida de uma quebra de linha em um descritor de arquivo.
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != 0)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
