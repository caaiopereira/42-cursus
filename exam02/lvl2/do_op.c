/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:00:22 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/10 10:10:02 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>// printf
#include <stdlib.h>// atoi

int main(int ac, char **av) {
    // Verifica se há exatamente 4 argumentos de linha de comando
    if(ac == 4) {
        if(av[2][0] == '+') //verificação de operador
            // Se for adição, 
            //imprime a soma dos dois primeiros argumentos convertidos para inteiros
            printf("%d", (atoi(av[1]) + atoi(av[3])));
        
        if(av[2][0] == '-')
            // Se for subtração, 
            //imprime a diferença dos dois primeiros argumentos convertidos para inteiros
            printf("%d", (atoi(av[1]) - atoi(av[3])));
        
        if(av[2][0] == '*')
            // Se for multiplicação, 
            //imprime o produto dos dois primeiros argumentos convertidos para inteiros
            printf("%d", (atoi(av[1]) * atoi(av[3])));
        
        if(av[2][0] == '/')
            // Se for divisão, 
            //imprime o quociente dos dois primeiros argumentos convertidos para inteiros
            printf("%d", (atoi(av[1]) / atoi(av[3])));
        
        if(av[2][0] == '%')
            // Se for resto da divisão, 
            //imprime o resto dos dois primeiros argumentos convertidos para inteiros
            printf("%d", (atoi(av[1]) % atoi(av[3])));
    }
    // Imprime quebra de linha
    printf("\n");
}

