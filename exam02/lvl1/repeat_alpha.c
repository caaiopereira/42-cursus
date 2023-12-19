/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 08:52:16 by caiperei          #+#    #+#             */
/*   Updated: 2023/12/19 08:53:41 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int k;
	char *str;

	i = 0;
	k = 1;
	if (argc == 2)//verifica se a quantidade de argumentos é igual a 2
	{
		str = argv[1];//str recebe a string
		while (str[i] != '\0')//percorre até o \0
		{
			k = 1;
			if (str[i] >= 'A' && str[i] <= 'Z')
		//verifica se o caractere atual está entre A e Z
				k = str[i] - 64;
				//atualiza k com a posição no alfabeto
			if (str[i] >= 'a' && str[i] <= 'z')
		//verifica se o caractere atual está entre a e z
				k = str[i] - 96;
				//atualiza k com a posição no alfabeto
			while (k >= 1)
			{
				write(1, &str[i], 1);
			//imprime o caractere atual com o valor de k vezes
				k--;
			}
			i++;
			//avança para o proximo caractere na string
		}
	}
	write(1, "\n", 1);
	//Se o número de argumentos não for 1 imprime \n
	return (0);
}
