/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:11:33 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/18 16:51:50 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*pntr;

	i = 0;
	pntr = (unsigned char*)malloc(size * sizeof(unsigned char));
	if (pntr == NULL)
		return (NULL);
	else
		while (i < size)
		{
			pntr[i] = '\0';
			i++;
		}
	return ((unsigned char *)pntr);
}
