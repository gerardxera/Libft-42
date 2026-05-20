/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:12:52 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 15:09:10 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*val1;
	unsigned char	*val2;

	val1 = (unsigned char *)s1;
	val2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (val1[i] != val2[i])
			return (val1[i] - val2[i]);
		i++;
	}
	return (0);
}
