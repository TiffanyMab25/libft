/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:01:52 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/20 09:12:16 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ((char *)(malloc(sizeof(char) * size + 1)));
	if (str == NULL)
		return (NULL);
	else
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
	str[i] = '\0';
	return (str);
}
