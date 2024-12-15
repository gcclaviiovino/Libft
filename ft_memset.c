/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:41:57 by liovino           #+#    #+#             */
/*   Updated: 2024/12/12 14:41:58 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_str;

	i = 0;
	if (!str)
		return (NULL);
	s_str = (unsigned char *)str;
	while (i < n)
	{
		s_str[i] = c;
		i ++;
	}
	return (str);
}
