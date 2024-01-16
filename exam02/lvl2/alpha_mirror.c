/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:09:21 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/15 14:37:25 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    // Verifica se há exatamente dois argumentos passados
    if (ac == 2)
    {
        // Loop para percorrer cada caractere da segunda string de argumento
        while (av[1][i] != '\0')
        {
            // Se o caractere atual for uma letra minúscula
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = 219 - av[1][i]; // Substitui o caractere pela operação específica (219 - av[1][i])
                //219 -> soma de a + z das posições pela tabela ascii

            // Se o caractere atual for uma letra maiúscula
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = 155 - av[1][i]; // Substitui o caractere pela operação específica (155 - av[1][i]),
                //155 -> soma de A + Z das posições pela tabela ascii

            // Escreve o caractere resultante no stdout
            write(1, &av[1][i], 1);

            // Move para o próximo caractere na string
            i++;
        }
    }

    // Escreve uma nova linha no stdout
    write(1, "\n", 1);
}

/*
#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 219 - av[1][i];
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 155 - av[1][i];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
*/
