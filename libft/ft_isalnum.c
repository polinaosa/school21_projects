/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swhent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:56:25 by swhent            #+#    #+#             */
/*   Updated: 2020/10/30 15:33:07 by swhent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int ch)
{
    int count;

    count = 0;
    if((ch >= 65 && ch <=90)||(ch >=97 && ch <=122)||(ch >= 48 && ch <= 57))
    {
        count = 1;
    }
    return(count);
}

// int main(void)
// {
// char ch;

// ch = 'd';
// printf("%d", isalnum(ch));
// printf("\n");
// printf("%d", ft_isalnum(ch));
// return 0;
// }