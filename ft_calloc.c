/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:33:34 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 14:54:48 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total_size;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total_size = nmemb * size;
	mem = malloc(total_size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, total_size);
	return (mem);
}
