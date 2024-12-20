/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <liovino@student.42.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:17:33 by liovino           #+#    #+#             */
/*   Updated: 2024/12/15 19:29:31 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// static void	free_str(char **matrix, int w_count)
// {
// 	int	i;

// 	i = 0;
// 	while (i < w_count)
// 	{
// 		free(matrix[i]);
// 		i ++;
// 	}
// }
static int	w_count(const char *str, char c)
{
	int		count;
	bool	in_w;
	int		i;

	count = 0;
	in_w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && !in_w)
		{
			in_w = 1;
			count ++;
		}
		else if (str[i] == c)
			in_w = 0;
		i ++;
	}
	return (count);
}

static int	sub_len(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
	{
		len ++;
	}
	return (len);
}

static char	*fill(const char *src, int i, int len)
{
	char	*dest;
	int		i_sub;

	i_sub = 0;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i_sub < len)
	{
		dest[i_sub] = src[i];
		i ++;
		i_sub ++;
	}
	dest[i_sub] = '\0';
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	int		len;
	int		i;
	char	**superstr;
	int		row;

	i = 0;
	row = 0;
	superstr = (char **) malloc(sizeof(char *) * (w_count(s, c) + 1));
	if (!superstr)
		return (NULL);
	while (s[i] != '\0')
	{
		len = sub_len(&s[i], c);
		if (s[i] != c)
		{
			superstr[row] = fill(s, i, len);
			i ++;
			s += len;
		}
		else
			i ++;
		row ++;
	}
	superstr[row] = NULL;
	return (superstr);
}

int	main(void)
{
	// char	*str = "bella raga come va";
	char	**split;
	// char	c = ' ';

	split = ft_split("          ", ' ');
	printf("%s\n", split[0]);
	printf("%s\n", split[1]);
	printf("%s\n", split[2]);
	printf("%s\n", split[3]);
}