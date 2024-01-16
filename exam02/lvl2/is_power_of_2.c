/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:32:47 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 13:44:26 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n) {
    // Verifica se o número é zero, pois zero não é uma potência de 2.
    if (n == 0)
        return 0; // Retorna 0 se o número for zero.

    // Entra em um loop enquanto o número for maior que 1.
    while (n > 1) {
        // Verifica se o número é par.
        if (n % 2 == 0)
            n = n / 2; // Divide o número por 2 se for par.
        else
            return 0; // Retorna 0 se o número não for par (não é uma potência de 2).
    }

    // Se o loop terminar (n atingiu 1), o número original é uma potência de 2.
    return 1; // Retorna 1 indicando que é uma potência de 2.
}

/*
int is_power_of_2(unsigned int n) {
    if (n == 0)
        return 0;
        
    while (n > 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            return 0;
    }
    return 1;
}

*/
