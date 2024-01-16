/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:08:27 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/08 13:30:15 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    // Verifica se há exatamente dois argumentos passados para o programa
    if (argc == 2)
    {
        // Itera através dos caracteres da segunda string até o final
        while (argv[1][i] != '\0')
        {
            // Verifica se o caractere atual é um sublinhado
            if (argv[1][i] == '_')
            {
                i++; // Avança para o próximo caractere
                // Converte o caractere para maiúscula (assumindo ASCII)
                argv[1][i] = argv[1][i] - 32;
            }
            // Escreve o caractere atual na saída padrão
            write(1, &argv[1][i], 1);
            i++; // Avança para o próximo caractere
        }
    }
    // Escreve uma quebra de linha indicando o final da string
    write(1, "\n", 1);
}

/*
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == '_')
			{
				i++;
				argv[1][i] = argv[1][i] - 32;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
*/

