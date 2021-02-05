/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swhent <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:56:25 by swhent            #+#    #+#             */
/*   Updated: 2020/10/30 15:33:07 by swhent           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int ch)
{
    int count;

    count = 0;
    if(ch >= 48 && ch <= 57)
    {
        count = 1;
    }
    return(count);
}

// int main(void)
// {
// char ch;

// ch = 'l';
// printf("%d", isdigit(ch));
// printf("\n");
// printf("%d", ft_isdigit(ch));
// return 0;
// }