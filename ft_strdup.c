/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:43:10 by liovino           #+#    #+#             */
/*   Updated: 2024/12/15 15:29:06 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}

char	*ft_strdup(const char *str)
{
	char	*dest;
	int		len;

	len = ft_strlen(str);
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (!dest || !src)
		return (NULL);
	ft_strlcpy(dest, str, (size_t)(len + 1));
	return (dest);
}
