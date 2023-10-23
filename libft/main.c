/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:38:57 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/23 14:31:25 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	char	str[] = "Hello, World!";
	char	search = 'o';

	char	*result = ft_strchr(str, search);
	printf("o '%c' esta na posição %ld\n", search, result - str);
}
