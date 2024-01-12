/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:26:30 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 11:29:35 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
    // Desloca os 4 bits mais significativos para a direita (rotação para a direita)
    // e os 4 bits menos significativos para a esquerda (rotação para a esquerda),
    // depois combina os dois resultados usando a operação de OU bit a bit.
    return ((octet >> 4) | (octet << 4));
}

