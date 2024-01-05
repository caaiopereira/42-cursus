/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:13:58 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/05 09:17:33 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* 
 argv[0] --> a.out
 argv[1] --> string que vai ser trocada a letra Ex: abc
 argv[2] --> letra que vai ser trocada Ex: a
 argv[3] --> letra que vai ser substituida Ex: d
 resultado --> dbc 
*/

int main(int argc, char **argv)
{
    int i = 0;

//verificação de quantidade de argumento, e se argv[2] e [3] são nulos
    if (argc == 4 && !argv[2][1] && !argv[3][1])
    {
        while (argv[1][i] != '\0')//percorre a string
        {
            if (argv[1][i] == argv[2][0]) 
    //verifica se o caractere atual é igual o caractere a ser substituido
            {
                argv[1][i] = argv[3][0];
          //substitui o caractere atual(a) pelo caractere de substituição(d)
            }
    //imprime caso for o caractere de substituição ou não
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}
