/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:10:30 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/21 14:10:33 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>//malloc


int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if(n < 0)
		(n *= -1);
	n++;

	range = (int *)malloc(sizeof(int) * n);
	if(range)
	{
		if(end > start)
			step = -1;
		while(n > i)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return range;
}
