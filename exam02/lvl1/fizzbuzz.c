/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 09:54:44 by caiperei          #+#    #+#             */
/*   Updated: 2023/12/15 09:56:25 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>// biblioteca para write

int	main(void)
{
	int	i;
	int k;
	int l;

	i = 1;//inicializa com 1
	while (i <= 100)//loop para ir até 100
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		//verifica se i é divisivel por 3 e 5
			write(1, "fizzbuzz", 8);
			//caso for imprime fizzbuzz
		else if (i % 3 == 0)
		//verifica se i é divisivel 3
			write(1, "fizz", 4);
			//caso for imprime fizz
		else if (i % 5 == 0)
		//verifica se i é divisivel 5
			write(1, "buzz", 4);
			//caso for imprime buzz
		else if (i > 10)
		//caso i for maior que 10 e nao seja imprimivel por 3 nem 5
		{
			k = i / 10 + '0';
//i é dividido por 10, somado com '0' da tabela ascii(48).fazendo que localize o valor pela tabela ascii
			l = i % 10 + '0';
//i é resto da divisão por 10, somado com '0' da tabela ascii(48).fazendo que localize o valor pela tabela ascii
			write (1, &k, 1);//imprime valor de k
			write (1, &l, 1);//imprime valor de l
			//então imprime juntando os valores nao divisiveis por 3 nem 5
		}
		else
		{
			k = i + '0';//soma com '0' da tabela ascii(48)
			write(1, &k, 1);//imprime o valor pela tabela ascii
		}
		write(1,"\n", 1);
		//imprime \n para proxima linha
		i++;
		//avança para o proximo numero até chegar 100
	}
}
