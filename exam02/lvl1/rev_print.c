/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:36:26 by caiperei          #+#    #+#             */
/*   Updated: 2023/12/15 13:37:10 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;//percorrer string

	i = 0;
	if (argc == 2)//verifica se o numero de argumentos passados é  igual 2
	{
		while(argv[1][i] != '\0')//calcula o comprimento da string
			i++;
		while (i >= 1)
		{
			write(1, &argv[1][i - 1], 1);
			//imprime invertendo a string de posição
			i--;
		}
	}
	write(1, "\n", 1);//imprime \n caso o numero de argumentos nao for 2
}
