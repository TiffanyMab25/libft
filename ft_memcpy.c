/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:54:01 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/10 14:09:10 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pntr1;
	char	*pntr2;

	i = 0;
	pntr1 = (char *)dest;
	pntr2 = (char *)src;
	if (pntr1 == '\0' && pntr2 == '\0')
	{
		return (NULL);
	}
	while (i < n)
	{
		pntr1[i] = pntr2[i];
		i++;
	}
	return (pntr1);
}
