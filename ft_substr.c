/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:45:18 by liovino           #+#    #+#             */
/*   Updated: 2024/12/15 15:30:58 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i_st;
	unsigned int	i;

	i_st = start;
	i = 0;
	sub = (char *) malloc(sizeof(char) * len);
	if (!sub)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		sub[i] = s[i_st + i];
		i ++;
	}
	return (sub);
}
