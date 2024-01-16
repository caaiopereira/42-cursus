/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 08:57:46 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/16 16:34:04 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    unsigned int i;
    unsigned int max;

    // Verifica se o comprimento do array é zero
    if (len == 0)
        return (0);

    // Inicializa as variáveis de iteração e max
    i = 0;
    max = tab[i];

    // Loop para percorrer o array
    while (i < len)
    {
        // Verifica se o elemento atual é maior que o max
        if (tab[i] > max)
            // Atualiza o valor max
            max = tab[i];

        // Incrementa o índice para avançar para o próximo elemento do array
        i++;
    }
    // Retorna o valor max encontrado no array
    return (max);
}

/*
int	max(int	*tab, unsigned int len)
{
	unsigned int	i;
	unsigned int	max;

	if (len == 0)
		return (0);
	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
*/
