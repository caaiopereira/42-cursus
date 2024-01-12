/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:31:47 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 10:55:07 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    // Variável para armazenar o resultado convertido
    int result = 0;

    // Variável para armazenar o sinal do número (inicializado como positivo)
    int sign = 1;

    // Ignora espaços em branco no início da string
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // Verifica se o próximo caractere é um sinal negativo
    if (*str == '-')
        sign = -1;

    // Avança para o próximo caractere se o sinal for negativo ou positivo
    if (*str == '-' || *str == '+')
        str++;

    // Converte os dígitos para inteiro enquanto são dígitos válidos
    while (*str >= '0' && *str <= '9')
    {
        // Atualiza o resultado multiplicando por 10 e somando o valor numérico do dígito
        result = result * 10 + *str - '0';

        // Avança para o próximo caractere
        str++;
    }

    // Retorna o resultado multiplicado pelo sinal
    return (sign * result);
}

