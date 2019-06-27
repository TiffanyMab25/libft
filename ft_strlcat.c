/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:10:08 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/24 10:40:19 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	max;

	max = 0;
	i = ft_strlen((const char *)dst);
	j = ft_strlen(src);
	max = i;
	if (i > dstsize)
		max = dstsize;
	max = max + j;
	j = 0;
	if (dstsize > 0)
		while ((i + j) < (dstsize - 1) && src[j] != '\0')
		{
			dst[i + j] = src[j];
			j++;
		}
	dst[i + j] = '\0';
	return (max);
}
