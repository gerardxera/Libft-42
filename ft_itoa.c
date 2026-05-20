/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:16:22 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/13 12:02:43 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cont_num(long n)
{
	size_t	cont;

	cont = 0;
	if (n == 0)
		cont = 1;
	if (n < 0)
	{
		cont++;
		n = n * -1;
	}
	while (n > 0)
	{
		cont++;
		n = (n / 10);
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	size_t	cont;

	num = n;
	cont = ft_cont_num(num);
	str = (char *)malloc((cont + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[cont] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--cont] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
