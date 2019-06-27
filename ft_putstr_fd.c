/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:34:33 by tmabunda          #+#    #+#             */
/*   Updated: 2019/06/19 13:40:03 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (str == NULL)
		write(1, "NULL", 4);
	else
		while (str[i] != '\0')
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
}
