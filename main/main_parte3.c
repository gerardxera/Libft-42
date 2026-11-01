/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 15:17:22 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/15 11:33:30 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{

	/* ---Prueba de ft_lstnew--- */
	printf("Prueba de ft_lstnew \n");
	char	*text = "Hola Mundo";
	
	// 2. crear el nuevo nodo usando la funcion
	t_list *nuevo_nodo = ft_lstnew(text);
	// 3. verifica si la ccreacion fallo
	if (!nuevo_nodo)
	{
		printf("Error: no se puede crear el nodo \n");
		
		return (1);
	}
	// 4. imprimir y comprobar el resultado
	printf("Dirección del nodo: %p\n", (void *)nuevo_nodo);
	printf("Contenido del nodo: %s\n", (char *)nuevo_nodo->content);

	if (nuevo_nodo->next == NULL)
		printf("Siguiente nodo: NULL (Correcto)\n");
	else
		printf("Siguiente nodo: %p (Incorrecto)\n", (void *)nuevo_nodo->next);
	// 5. Liberar la memoria asignada
	//free(nuevo_nodo->content);
	free(nuevo_nodo);

	/* ---Prueba de ft_lstadd_front--- */
	printf("Prueba de ft_lstadd_front\n\n");
	// Crear el primer nodo
	t_list	*lista = ft_lstnew("Mundo");
	// Crear el segundo nodo
	t_list	*nueva = ft_lstnew("Hola");
	// Anyadir el nuevo nodo el principio
	ft_lstadd_front(&lista, nueva);
	// lista apunta a Hola y su next apunta Mundo
	printf("%s%s\n", (char *)lista->content, (char *)lista->next->content);
	//imprime hola mundo

	/* ---Prueba de ft_lstsize--- */
	printf("Prueba de ft_lstsize\n\n");

	/* ---Prueba de ft_lstlast --- */
	printf("Prueba de ft_lstlast \n");
	// Creo 3 nodos 
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	// Reservar MEMOIA
	nodo1 = malloc(sizeof(t_list));
	nodo2 = malloc(sizeof(t_list));
	nodo3 = malloc(sizeof(t_list));
	// asignar el contenido para saber cual es cual el comprobar
	//Tambien lo podria hacer con [ft_lstnew("Soy Nodo1");]
	nodo1->content = "NODO1";
	nodo2->content = "NODO2";
	nodo3->content = "NODO3";
	// asignar el siguiente nodo
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	// Devuelve el ultimo nodo
	printf("Node3 %s\n", (char *)ft_lstlast(nodo1)->content);
	// Liberar memoria
	free(nodo1);
	free(nodo2);
	free(nodo3); 
	// ---Prueba de ft_lstmap --- */
	printf("Prueba de ft_lstmap\n");
	
	t_list	*vagon;
	void	*HOLA = "HOLA";
	
	vagon = NULL;
	vagon = ft_lstnew(HOLA);
	t_list *resultado = ft_lstmap(vagon, (void *)ft_tolower, free);
	
	printf("%s\n", (char *)resultado->content);
	
	return (0);
}
