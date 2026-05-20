/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:09:25 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 12:57:38 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	l;
	size_t	result;

	len = ft_strlen(dest);
	result = len;
	if (size == 0 || size <= len)
		return (size + ft_strlen(src));
	l = 0;
	while (src[l] != '\0' && len < size - 1)
	{
		dest[len] = src[l];
		len++;
		l++;
	}
	dest[len] = '\0';
	result = result + ft_strlen(src);
	return (result);
}
