/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:44:44 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/10 11:16:38 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Declaração da função ft_strcmp que compara duas strings
int ft_strcmp(char *s1, char *s2)
{
    // Declaração da variável de índice
    int i;

    // Inicialização do índice com 0
    i = 0;

    // Loop enquanto pelo menos uma das strings não atingir o caractere nulo
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        // Verifica se os caracteres nas posições correspondentes são diferentes
        if (s1[i] != s2[i])
            // Retorna a diferença entre os códigos ASCII desses caracteres
            return s1[i] - s2[i];

        // Incremento do índice para passar para o próximo caractere
        i++;
    }

    // Se o loop terminar, significa que as strings são iguais, então retorna 0
    return 0;
}
