/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:39:09 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/24 16:40:25 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	j;
	size_t	n;

	i = 0;
	n = 0;
	j = 1;
	while ((*str >= '\t' && *str <= '\r') || (*str == 32))
		str++;
	if (*str == '-')
		j = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	while (*str && ft_isdigit(*str))
	{
		i = i * 10 + *str++ - '0';
		n++;
	}
	if (n > 10 && j < 0)
		return (0);
	if (n > 10 && j > 0)
		return (-1);
	return (i * j);
}
