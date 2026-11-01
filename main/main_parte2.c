/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:56:11 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/14 11:49:49 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	ft_MAYtoMIN(unsigned int cont, char c)
{
	(void)cont;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	main(void)
{
	/* ---Prueba de ft_substr--- */
	printf("Prueba de ft_substr \n");
	printf("Devuelve: %s\n\n", ft_substr("Hola Mundo", 4, 60));

	/* ---Prueba de ft_strjoin--- */
	printf("Prueba de ft_strjoin \n");
	printf("Devuelve: %s\n\n", ft_strjoin("Mundo", "Hola"));

	/* ---Prueeba de ft_strtrim--- */
	printf("Prueba de ft_strtrim \n");
	printf("Devuelve solo Hola %s\n\n", ft_strtrim(" yj gjlHola gjjy l", " yjgl"));
	/* ---Prueba de ft_split--- */
	printf("Prueba de ft_split \n");
	char	**res = ft_split("  Hola Mundo  SUUUU  ", ' ');
	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	printf("%s\n\n", res[2]);
	free(res);

	/* ---Prueba de ft_itoa--- */
	printf("Prueba de ft_itoa \n");
	printf("Comvierte num a string: %s\n\n", ft_itoa(-2147483648));

	/* ---Prueba de ft_strmapi--- */
	printf("Prueba de ft_strmapi \n");
	char	*devolucion;
	devolucion = ft_strmapi("HOLA MUNDO", ft_MAYtoMIN);
	if (!devolucion)
		return (1);
	printf("Comvierte: %s\n\n", devolucion);
	free(devolucion);

	/* ---Prueba de ft_striteri--- */
	printf("Prueba de ft_striteri \n");
	/*----------hacer main-----------*/
	
	/* ---Prueba de ft_putchar_fd--- */
	printf("Prueba de ft_putchar_fd\n");
	ft_putchar_fd('I', 0);
	ft_putchar_fd('\n',1);
	ft_putchar_fd('T', 1);
	ft_putchar_fd('\n',1);
	ft_putchar_fd('E', 2);

	/* ---Prueba de ft_putstr_fd--- */
	printf("Prueba de ft_putstr_fd\n");
	ft_putstr_fd("Hola Mundo", 1);
	ft_putchar_fd('\n', 1);

	/* ---Prueba de ft_putendl_fd--- */
	printf("Prueba de ft_putendl_fd\n");
	ft_putendl_fd("Con salto linea", 1);
	printf("\n");

	/* ---Prueba de ft_putnbr_fd--- */
	printf("Prueba de ft_putnbr_fd\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	return(0);
}
