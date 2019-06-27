/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:25:19 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/19 13:35:32 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	str = ft_strnew(j);
	if (str == NULL)
		return (NULL);
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
