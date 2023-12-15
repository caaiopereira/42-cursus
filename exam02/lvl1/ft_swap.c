/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 08:54:47 by caiperei          #+#    #+#             */
/*   Updated: 2023/12/15 09:07:27 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a; //swap recebe valor de a
	*a = *b; //a recebe valor de b
	*b = swap; //b recebe valor de swap

	//fazendo troca de valores com variavel auxiliar
}
