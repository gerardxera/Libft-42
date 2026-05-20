/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:20:37 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/16 12:59:40 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*memo;
	size_t	len;
	size_t	i;	

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	memo = (char *)malloc((len + 1) * sizeof(char));
	if (!memo)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		memo[i] = f(i, s[i]);
		i++;
	}
	memo[i] = '\0';
	return (memo);
}
