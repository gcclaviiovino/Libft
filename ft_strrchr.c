/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:45:01 by liovino           #+#    #+#             */
/*   Updated: 2024/12/12 14:45:03 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return (&str[i + 1]);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i --;
	}
	return (NULL);
}
