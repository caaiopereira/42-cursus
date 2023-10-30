/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:15:10 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/30 16:15:16 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	verifica se c é uma letra do alfabeto retornando 1 ser for true
	e 0 ser for false
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
