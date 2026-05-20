/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:15:14 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 15:06:29 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] == (char)c)
			return ((char *)&str[len]);
		len++;
	}
	if ((char)c == '\0')
		return ((char *)&str[len]);
	return (NULL);
}
