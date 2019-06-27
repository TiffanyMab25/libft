/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:39:38 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/21 14:50:25 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *src1;
	char *dst1;

	if (dst == '\0' && src == '\0')
		return (NULL);
	src1 = (char*)src;
	dst1 = (char*)dst;
	if (src1 < dst1)
	{
		src1 = src1 + len - 1;
		dst1 = dst1 + len - 1;
		while (len-- > 0)
			*dst1-- = *src1--;
	}
	else
		while (len-- > 0)
			*dst1++ = *src1++;
	return (dst);
}
