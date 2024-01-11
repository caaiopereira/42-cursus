/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:04:09 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/11 16:28:11 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	// Verifica se há exatamente dois argumentos
	if(ac == 2)
	{
	 //loop para percorrer os caracteres
		while(av[1][i] != '\0')
		{
		 //Verifica se o caractere atual é uma letra maiúscula
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
			//Converte a letra maiúscula para minúscula e imprime um "_"
				av[1][i] = av[1][i] + 32;
				write(1, "_", 1);
			}
			 //Imprime o caractere atual
			write(1, &av[1][i], 1);
			//Incrementa o índice para avançar para o próximo caractere
			i++;	
		}
	}
	//Imprime quebra de linha no final
	write(1, "\n", 1);
}
