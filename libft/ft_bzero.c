/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:03:40 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:54:03 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Preenche uma região de memória com zeros.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
