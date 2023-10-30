/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:18:24 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/30 16:47:10 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	verifica se o caractere faz parte da tabela ASCII
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
