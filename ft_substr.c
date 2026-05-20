/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:40:31 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/08 11:57:59 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		copy = malloc(1 * sizeof(char));
		if (copy == NULL)
			return (NULL);
		copy[0] = '\0';
		return (copy);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (i < len)
		copy[i++] = s[start++];
	copy[i] = '\0';
	return (copy);
}
