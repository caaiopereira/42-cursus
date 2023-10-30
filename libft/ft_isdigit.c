/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:58:06 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/30 16:33:37 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	recebe um caractere como entrada e retorna 1 se for um digito 0-9
	e retorna 0 caso nao for
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
