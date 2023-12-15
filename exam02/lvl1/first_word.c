/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:55:02 by caiperei          #+#    #+#             */
/*   Updated: 2023/12/15 13:02:16 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>//biblioteca para write

//função para imprimir
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)//verifica se há mais de 1 argumento após o ./a.out
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')//agrv[1] -> seleciona o argumento
		//loop até encontrar o primeiro caractere que não é espace/tab na string
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{//loop para verificar caracteres ignorando espace/tab até o \0
			ft_putchar(argv[1][i]);
			//imprime o caractere atual
			i++;
			//avança para o proximo caractere
		}
	}
	ft_putchar('\n');
	//caso não ter mais de 1 argumento ou nao houver palvras exiba \n
	return (0);
}
