/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:32:41 by caiperei          #+#    #+#             */
/*   Updated: 2024/04/02 10:32:43 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"

int	main(void)
{
	int		fd;
	int		read;
	char	*line;
	char	*str;

	fd = open("text", O_RDONLY);
	read = 0;
	line = 0;
	str = 0;
	while (read == 0)
	{
		line = get_next_line(fd);
		if (!line)
			read = 1;
		else
			str = ft_strjoin(str, line);
	}
	ft_printf("%s", str);
	free(line);
	free(str);
}
