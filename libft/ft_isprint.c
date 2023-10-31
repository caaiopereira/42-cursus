/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:04:04 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:55:25 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Verifica se um caractere é um caractere imprimível.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
