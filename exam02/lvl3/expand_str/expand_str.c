/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:48:08 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/30 10:44:17 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char const **av)
{
    int i = 0;
    int flag = 0;

    if (ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            if (!(av[1][i] == ' ' || av[1][i] == '\t'))
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
