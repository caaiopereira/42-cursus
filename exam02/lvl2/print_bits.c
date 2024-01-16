/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:46:49 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/15 13:50:28 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Função para imprimir os bits de um octeto (byte) no formato binário
void print_bits(unsigned char octet)
{
    // Inicializa um contador para 8 bits
    int i = 8;

    // Variável para armazenar cada bit do octeto
    unsigned char bit;

    // Loop para iterar sobre cada bit do octeto
    while (i--)
    {
        // Desloca o octeto para a direita (bitwise right shift) e extrai o bit mais à direita
        bit = (octet >> i & 1) + '0';

        // Usa a função write para imprimir o bit no descritor de arquivo 1 (saída padrão)
        write(1, &bit, 1);
    }
}

/*
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

*/
