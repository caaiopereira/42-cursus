/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:02:59 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 13:23:42 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    // Verifica se o número de argumentos de linha de comando é igual a 3.
    if(ac == 3)
    {
        // Array para rastrear caracteres já encontrados.
        int ascii[255] = {0};

        // Loop que percorre os três argumentos de linha de comando.
        for(int i = 0; i < 3; i += 1)
        {
            // Índice para percorrer os caracteres no argumento atual.
            int x = 0;

            // Loop que percorre os caracteres do argumento atual.
            while(av[i][x])
            {
                // Verifica se o caractere atual ainda não foi encontrado.
                if(ascii[(int)av[i][x]] == 0)
                {
                    // Marca o caractere como encontrado.
                    ascii[(int)av[i][x]] = 1;
                    
                    // Escreve o caractere na saída padrão.
                    write(1, &av[i][x], 1);
                }

                // Incrementa o índice para passar para o próximo caractere.
                x += 1;
            }
        }
    }

    // Escreve uma nova linha na saída padrão, independentemente da condição inicial.
    write(1, "\n", 1);
}

