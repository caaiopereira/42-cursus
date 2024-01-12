/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:10:18 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 11:21:17 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    // Verifica se há exatamente dois argumentos, incluindo o nome do programa
    if (ac == 2)
    {
        // Loop para percorrer cada caractere na segunda string de argumento (av[1])
        while (av[1][i] != '\0')
        {
            // Verifica se o caractere atual é uma letra entre 'a' e 'y' (ou 'A' e 'Y')
            if ((av[1][i] >= 'a' && av[1][i] <= 'y') || (av[1][i] >= 'A' && av[1][i] <= 'Y'))
                av[1][i] = av[1][i] + 1; // Se sim, incrementa o valor ASCII para a próxima letra

            // Verifica se o caractere atual é 'z' ou 'Z'
            else if (av[1][i] == 'z' || av[1][i] == 'Z')
                av[1][i] = av[1][i] - 25; // Se sim, ajusta o valor ASCII para 'a' ou 'A'

            // Escreve o caractere modificado na saída padrão
            write(1, &av[1][i], 1);

            // Incrementa o índice para avançar para o próximo caractere na string
            i++;
        }
    }

    // Escreve um caractere de nova linha ('\n') na saída padrão, para finalizar a linha de saída
    write(1, "\n", 1);
}

