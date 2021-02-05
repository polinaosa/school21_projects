/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swhent <swhent@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	i = 1;
	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			if (s[0] == c)
				return ((char *)(s));
			else
				return (NULL);
		}
		i++;
	}
	return (ft_strrchr(s + i, c));
}
