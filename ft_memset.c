/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:38:28 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/18 16:36:19 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*beginning;
	size_t			i;

	i = 0;
	if (n == 0)
		return (b);
	beginning = b;
	while (i < n)
	{
		beginning[i] = (unsigned char)c;
		i++;
	}
	return (beginning);
}
