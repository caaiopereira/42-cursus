/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:25:45 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 09:43:15 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>// size_t

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int x = 0;

	//percorre a string 's' até encontrar o caractere nulo
	while(s[i] != '\0')
	{
		x = 0; //Reinicia o índice para percorrer a string 'reject' a cada iteração
		
		//percorre a string 'reject' até encontrar o caractere nulo
		while(reject[x] != '\0')
		{
		// Verifica se o caractere atual de 's' é igual ao caractere atual de 'reject'
			if(s[i] == reject[x])
				return i;//Retorna a posição do caractere correspondente encontrado em 's'

			x++;//Incrementa o índice para verificar o próximo caractere em 'reject'
		}
		i++;// Incrementa o índice para verificar o próximo caractere em 's'
	}
	return i;//retorna o comprimento total
}

/*
#include <stddef.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     x = 0;

    while (s[i] != '\0')
    {
		x = 0;
        while (reject[x] != '\0')
        {
            if(s[i] == reject[x])
                return (i);
            x++;
        }
        i++;
    }
    return (i);
}
*/
