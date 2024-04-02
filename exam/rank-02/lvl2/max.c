/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 08:57:46 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/16 16:34:04 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int	*tab, unsigned int len)
{
	unsigned int	i = 0;
	int	max;

	if (len == 0)
		return (0);
	max = tab[i];
	while (len > i)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
