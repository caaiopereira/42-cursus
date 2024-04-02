/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:10:42 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/21 14:10:43 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return 0;
	if (a > b)
		n = a;
	else
		n = b;
	while(1)
	{
		if(n % a == 0 && n % b == 0)
			return n;
		n++;
	}
}
