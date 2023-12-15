/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:16:51 by caiperei          #+#    #+#             */
/*   Updated: 2023/12/15 09:23:16 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //biblioteca para write

int	main(int argc, char **argv)
{
//argc -> quantidade de argumentos passados
//argv -> array de strings

	int	i;//percorrer string

	i = 0;
	if (argc == 2) //verifica se há mais de 1 argumento após o ./a.out
	{
		while (argv[1][i] != '\0')//percorre a string até \0
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		//verifica se o caractere atual é uma letra minuscula
				argv[1][i] = argv[1][i] - 32;
		//se for subtrai 32 na tabela ascii convertendo pra maiuscula
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		//verifica se o caractere atual é uma letra maiuscula
				argv[1][i] = argv[1][i] + 32;
		//se for soma 32 na tabela ascii convertendo pra minuscula
			write(1, &argv[1][i], 1);
			//imprime o caractere atual
			i++;
			//avança para o proximo caractere
		}
	}
	write(1, "\n", 1);
	//imprime \n caso não for informado nenhum argumento
}
