/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:34:59 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/18 16:38:32 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*pntr1;
	char	*pntr2;

	i = 0;
	pntr1 = (char *)dest;
	pntr2 = (char *)src;
	while (i < n)
	{
		pntr1[i] = pntr2[i];
		if ((unsigned char)pntr1[i] == (unsigned char)c)
			return ((char *)dest + i + 1);
		i++;
	}
	return (NULL);
}
