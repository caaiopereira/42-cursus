/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:12:44 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/30 16:43:16 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	verifica se há um caractere alfanumerico
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	return (0);
}
