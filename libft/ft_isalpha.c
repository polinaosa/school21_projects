/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swhent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:56:25 by swhent            #+#    #+#             */
/*   Updated: 2020/10/30 15:33:07 by swhent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int ch)
{
    int count;

    count = 0;
    if((ch >= 65 && ch <=90)||(ch >=97 && ch <=122))
    {
        count = 1;
    }
    return(count);
}

// int main(void)
// {
// char ch;

// ch = '4';
// printf("%d", isalpha(ch));
// printf("\n");
// printf("%d", ft_isalpha(ch));
// return 0;
// }