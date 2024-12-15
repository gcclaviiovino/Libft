/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:27:57 by liovino           #+#    #+#             */
/*   Updated: 2024/12/15 15:27:58 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dest != src)
	{
		while (i < n)
		{
			ds[i] = sr[i];
			i ++;
		}
	}
}
