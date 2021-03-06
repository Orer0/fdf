/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroblin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:39:08 by aroblin           #+#    #+#             */
/*   Updated: 2017/11/24 19:07:58 by aroblin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = NULL;
	if (!(s))
		return (NULL);
	i = 0;
	if (!(dest = ft_strnew(len)))
		return (NULL);
	while (0 < len && s[start] != '\0')
	{
		dest[i] = s[start];
		start++;
		len--;
		i++;
	}
	return (dest);
}
