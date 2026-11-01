/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:38:34 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/05 16:38:14 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


int	main(void)
{
	/* ---Prueba de ft_isalpha--- */
	printf("Prueba de ft_isalpha \n");
	printf("Con G (debe de ser 1): %d\n", ft_isalpha('G'));
	printf("Con 5 (Debe de ser 0): %d\n\n", ft_isalpha(5));

	/* ---Prueba de ft_isdigit--- */
	printf("Prueba de ft_isdigit \n");
	printf("Con 8 (Debe de ser 1): %d\n", ft_isdigit(8));
	printf("Con G (Debe de ser 0); %d\n\n", ft_isdigit('G'));

	/* ---Prueba de ft_isalnum--- */
	printf("Prueba de ft_isalnum \n");
	printf("Con G (Debe de ser 1): %d\n", ft_isalnum('G'));
	printf("Con g (Debe de ser 1): %d\n", ft_isalnum('g'));
	printf("Con 8 (Debe de ser 1): %d\n", ft_isalnum(8));
	printf("Con @ (Debe de ser 0): %d\n\n", ft_isalnum('@'));

	/* ---Prueba de ft_isascii--- */
	printf("Prueba de ft_isascii \n");
	printf("Con G (Debe de ser 1): %d\n", ft_isascii('G'));
	printf("Con g (Debe de ser 1): %d\n", ft_isascii('g'));
	printf("Con 8 (Debe de ser 1): %d\n", ft_isascii('8'));
	printf("Con @ (Debe de ser 1): %d\n", ft_isascii('@'));
	printf("Con [NULL] (Debe de ser 0): %d\n\n", ft_isascii(128));

	/* ---Prueba de ft_isprint--- */
	printf("Prueba de ft_isprint \n");
	printf("Con G (Debe de ser 1): %d\n", ft_isprint('G'));
	printf("Con g (Debe de ser 1): %d\n", ft_isprint('g'));
	printf("Con 8 (Debe de ser 1): %d\n", ft_isprint('8'));
	printf("Con @ (Debe de ser 1): %d\n", ft_isprint('@'));
	printf("Con [NULL] (Debe de ser 0): %d\n\n", ft_isprint(0));

	/* ---Prueba de ft_strlen--- */
	printf("Prueba de ft_isprint \n");
	printf("Con HOLA (Debe de ser 4): %zu\n\n", ft_strlen("hola"));

	/* ---Prueba de ft_memset--- */
	printf("Prueba de ft_memset \n");
	char	str[] = "HOLA";
	printf("Con HOLA (Debe salir 000A): %s\n\n", (char *)ft_memset(str, '8', 3));

	/* ---Prueba de ft_bzero--- */
	printf("Prueba de ft_bzero \n");
	char	zero[] = "HOLA";	
	ft_bzero(zero, 3);
        printf("Los 3 primeros caracteres NULL: %c, %c, %c, %c,\n\n",zero[0], zero[1], zero[2], zero[3]);
	int    zero1[] = {100, 200, 300, 400};	
	ft_bzero(zero1, 3); //3 * sizeof(int) fuerza q sea un integer.
	printf("Lo 2 primeros caractes NULL: %d, %d, %d, %d,\n\n",zero1[0], zero1[1], zero1[2], zero1[3]);

	/* ---Prueba de ft_memcpy--- */
	printf("Prueba de ft_memcpy \n");
	char	start[] = "Gerard";
	char	end[10] = "HOLA";
	printf("Devuelve GeLA: %s\n\n", (char *)ft_memcpy(end, start, 2));

	/* ---Prueba de ft_memmove--- */

	printf("Prueba de ft_memmove \n");
	char	movecopy[] = "Gerard";
	char	movepass[10] = "12345";
	printf("funcion original %s\n", (char *)memmove(movepass, movecopy, 4));
	printf("Devuelve HOHO: %s\n\n", (char *)ft_memmove(movepass, movecopy, 4));
	/* ---Prueba de ft_strlcpy--- */
	printf("Prueba de ft_strlcpy \n");
	char	lcpy_o[] = "Hola";
	char	lcpy_d[] = "1234";
	//printf("Funcion original %d\n", strlcpy(lcpy_d, lcpy_o, 2));
	printf("Devuelve 4: %d\n\n", (int)ft_strlcpy(lcpy_d, lcpy_o, 2));

	/* ---Prueba de ft_strlcat--- */
	printf("Prueba de ft_strlcat \n");
	char	cat_copy[] = "1234";
	char	cat_pass[4] = "123";
	//printf("funcion original %d\n", (int)strlcat(cat_pass, cat_copy, 5));
	printf("Resultado: 9 %d\n\n", (int)ft_strlcat(cat_pass, cat_copy, 4));

	/* ---Prueba de ft_toupper--- */
	printf("Prueba de ft_toupper \n");
	printf("He puesto h y devuelve 72 %d\n\n", ft_toupper('h'));

	/* ---Prueba de ft_tolower--- */
	printf("Prueba de ft_tolower \n");
	printf("He puesto A y devuelve 97 %d\n\n", ft_tolower('A'));

	/* ---Prueba de ft_strchr--- */
	printf("Prueba de ft_strchr \n");
	printf("Pongo a del str gerard: %p\n\n", ft_strchr("Gerard", 'a'));

	/* ---Prueba de ft_strrchr--- */
	printf("Prueba de ft_strrchr \n");
	printf("Pongo s STR y i a Camino: %p\n\n", ft_strrchr("Camino", 'i'));

	/* ---Prueba de ft_strncmp--- */
	printf("Prueba de ft_strncmp \n");
	printf("Devolucion %d\n\n", ft_strncmp("HOLA", "HOLA A", 6));

	/* ---Prueba de ft_memchr--- */
	printf("Prueba de ft_memchr \n"); // si quieres comprobar si es NULL si devuelve 1 poniendo (NULL) == ft_memchr("Gerard", t, 8)
	printf("Devuelve direc memo %p\n\n", ft_memchr("Gerard", 'a', 8));

	/* ---Prueba de ft_memcmp--- */
	printf("Prueba de ft_memcmp \n");
	int	a = 101;
	int	b = 100; //Para comprobar con integer se pone el sizeof(int) i no se pone el numero de caracteres q se quiere contar 
	printf("Devueelve positivo: %d\n\n", ft_memcmp(&a, &b, sizeof(int)));

	/* ---Prueba de ft_strnstr--- */
	printf("Prueba de ft_strnstr \n");
	printf("Devuelve posicion: %p\n\n", ft_strnstr("Hola mundo 15", "mundo", 15));

	/* ---Prueba de ft_atoi--- */
	printf("Prueba de ft_atoi \n");
	printf("Devuelve -42: %d\n\n", ft_atoi("   -42HOLA"));

	/* ---Prueba de ft_calloc--- */
	printf("Prueba de ft_calloc \n");
	size_t	*arr = (size_t *)ft_calloc(10, sizeof(size_t));
	if (arr != NULL)
	{
	printf("Devuelve: %zu\n\n", *arr);
	free(arr);
	}

	/* ---Prueba de ft_strdup--- */
	printf("Prueba de ft_strdup \n");
	char	copy[] = "HOLA";
	printf("%p\n", copy);
	printf("Devuelve: %s\n\n", ft_strdup(copy));
	printf("%p\n", ft_strdup(copy));
	return (0);
}
