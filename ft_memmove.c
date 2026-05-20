/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:38:42 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 15:04:59 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*paste;
	const unsigned char	*copy;

	if (!dest && !src)
		return (NULL);
	paste = (unsigned char *)dest;
	copy = (const unsigned char *)src;
	if (paste > copy)
	{
		while (n > 0)
		{
			n--;
			paste[n] = copy[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
