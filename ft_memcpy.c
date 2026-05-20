/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:13:22 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 15:04:27 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*copy;
	unsigned char		*paste;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	copy = (const unsigned char *)src;
	paste = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		paste[i] = copy[i];
		i++;
	}
	return (dest);
}
