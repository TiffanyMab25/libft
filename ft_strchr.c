/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:41:39 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/20 09:17:34 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (str == '\0')
		if (str)
			return (NULL);
	{
		while (*str)
		{
			if (*str == (char)c)
				return (str);
			str++;
		}
	}
	if ((char)c == '\0')
	{
		return (str);
	}
	return (NULL);
}
