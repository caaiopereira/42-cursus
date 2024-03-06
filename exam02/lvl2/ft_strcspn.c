/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:25:45 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 09:43:15 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     x = 0;

    while (s[i])
    {
		x = 0;
        while (reject[x])
        {
            if(s[i] == reject[x])
                return (i);
            x++;
        }
        i++;
    }
    return (i);
}
