/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:43:41 by liovino           #+#    #+#             */
/*   Updated: 2024/12/12 14:43:43 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	i_dst;
	size_t	i_src;

	i = 0;
	i_dst = ft_strlen(dest);
	i_src = ft_strlen(src);
	if (size <= i_dst)
		return (size + i_src);
	while (src[i] != '\0' && i_dst + 1 < size)
	{
		dest[i] = src[i];
		i ++;
		i_dst ++;
	}
	dest[i] = 0;
	return (i_dst);
}
