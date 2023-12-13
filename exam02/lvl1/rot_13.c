/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:11:55 by caiperei          #+#    #+#             */
/*   Updated: 2023/12/13 13:49:45 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //biblioteca para write

int	main(int argc, char **argv) 
{
//argc -> quantidade de argumentos passados
//argv -> array de strings

	int	i;//percorrer string

	i = 0;
	if (argc == 2)//verifica se há mais de 1 argumento após o ./a.out
	{
		while (argv[1][i] != '\0')//percorre a string
		//argv[1][i] -> seleciona o argumento após o ./a.out
		{
			if ((argv[1][i] >= 'a' && argv[1][i]<= 'm') || (argv[1][i] >= 'A' && argv[1][i]<= 'M'))
				argv[1][i] = argv[1][i] + 13;
			else if ((argv[1][i] >= 'n' && argv[1][i]<= 'z') || (argv[1][i] >= 'N' && argv[1][i]<= 'Z'))
				argv[1][i] = argv[1][i] - 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
