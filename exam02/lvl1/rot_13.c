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
		while (argv[1][i] != '\0')//percorre a string até \0
		//argv[1][i] -> seleciona o argumento após o ./a.out
		{
			if ((argv[1][i] >= 'a' && argv[1][i]<= 'm') || (argv[1][i] >= 'A' && argv[1][i]<= 'M'))
		//verifica se o caractere atual é uma letra minuscula entre a e m ou maiuscula entre A e M
				argv[1][i] = argv[1][i] + 13;
				//se for soma 13 ao valor ascii do caractere
			else if ((argv[1][i] >= 'n' && argv[1][i]<= 'z') || (argv[1][i] >= 'N' && argv[1][i]<= 'Z'))
		//verifica se o caractere atual é uma letra minuscula entre n e z ou maiuscula entre N e Z
				argv[1][i] = argv[1][i] - 13;
				//se for subtrai 13 ao valor ascii do caractere
			write(1, &argv[1][i], 1);
			//imprime o caractere resultante
			i++;
			//avança para o proximo caractere da string
		}
	}
	write(1, "\n", 1);
	//imprime \n caso não for informado nenhum argumento
}
