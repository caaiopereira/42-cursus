/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:25:52 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/16 13:38:56 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Função para duplicar uma string
char *ft_strdup(char *src)
{
    int i = 0;
    char *dest;

    // Encontrar o tamanho da string original
    while (src[i] != '\0')
        i++;

    // Alocar memória para a nova string duplicada
    dest = malloc(sizeof(char) * (i + 1));
    
    // Verificar se a alocação de memória foi bem-sucedida
    if (dest == 0)
        return 0;

    // Resetar a variável 'i' para 0 para reutilizá-la
    i = 0;

    // Copiar os caracteres da string original para a nova string
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    // Adicionar o caractere nulo no final da nova string
    dest[i] = src[i];

    // Retornar o ponteiro para a nova string duplicada
    return dest;
}


/*#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *dest;

	while(src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if(dest == 0)
			return 0;
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return dest;
}
*/
