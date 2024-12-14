/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liovino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:54:28 by liovino           #+#    #+#             */
/*   Updated: 2024/12/12 16:55:27 by liovino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*f_str;
	int				len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	f_str = (char *) malloc(sizeof(char) * (len + 1));
	if (!f_str)
		return (NULL);
	while (s[i] != '\0')
	{
		f_str[i] = (*f)(i, &s[i]);
		i ++;
	}
	f_str[i] = '\0';
	return (f_str);
}