/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:35:34 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 15:08:18 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*val;

	val = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (val[i] == (unsigned char)c)
			return (&val[i]);
		i++;
	}
	return (NULL);
}
