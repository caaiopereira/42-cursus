/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawpoints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:53:29 by caiperei          #+#    #+#             */
/*   Updated: 2024/04/02 09:12:58 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	printrows(void *mlx, void *win, t_mapdata mp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < mp.meta.size -1)
	{
		ft_drawline(mp.points[i], mp.points[i + 1], mlx, win);
		i++;
		j++;
		if (j == mp.meta.columns - 1)
		{
			i++;
			j = 0;
		}
	}
}

void	printcolumns(void *mlx, void *win, t_mapdata mp)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (k < mp.meta.columns)
	{
		while (j < mp.meta.rows - 1)
		{
			ft_drawline(mp.points[i], mp.points[i + mp.meta.columns], mlx, win);
			i = i + mp.meta.columns;
			j++;
		}
		j = 0;
		k++;
		i = k;
	}
}

void	ft_drawpoints(t_mapdata mp, void *mlx, void *win)
{
	printrows(mlx, win, mp);
	printcolumns(mlx, win, mp);
}
