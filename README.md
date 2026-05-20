Este proyecto ha sido creado como parte del currículo de 42 por gjuan-pa.

# Libft

## Descripción
Este proyecto consiste en el desarrollo de **Libft**, una librería personalizada en C diseñada para replicar, comprender y ampliar las funciones estándar de la biblioteca de C ('libc'), así como introducir herramientas adicionales de gestión de memoria, manipulación de strings y manejo de estructuras de datos.

El objetivo principal es profundizar en la comprensión del funcionamiento interno de la memoria, los punteros y los algoritmos fundamentales en C, creando una base sólida de código reutilizable para los futuros proyectos de 42.

## Descripción de la Librería
La librería proporciona un conjunto de 43 funciones optimizadas y rigurosamente probadas, las cuales se dividen en las siguientes categorías:

### 1. Funciones de Comprobación y Manipulación de Caracteres
*   `ft_isalpha`: Comprueba si un carácter es alfabético.
*   `ft_isdigit`: Comprueba si un carácter es un dígito decimal.
*   `ft_isalnum`: Comprueba si un carácter es alfanumérico.
*   `ft_isascii`: Comprueba si un carácter pertenece al código ASCII.
*   `ft_isprint`: Comprueba si un carácter es imprimible.
*   `ft_toupper`: Convierte un carácter a mayúscula.
*   `ft_tolower`: Convierte un carácter a minúscula.

### 2. Funciones de Manipulación de Memoria
*   `ft_memset`: Llena un bloque de memoria con un byte específico.
*   `ft_bzero`: Escribe ceros en un bloque de memoria.
*   `ft_memcpy`: Copia un área de memoria a otra (sin solapamiento).
*   `ft_memmove`: Copia un área de memoria a otra (seguro contra solapamiento).
*   `ft_memchr`: Localiza un byte en un bloque de memoria.
*   `ft_memcmp`: Compara dos bloques de memoria.
*   `ft_calloc`: Reserva memoria dinámica inicializándola a cero.

### 3. Funciones de Cadenas de Caracteres (Strings)
*   `ft_strlen`: Calcula la longitud de una cadena.
*   `ft_strlcpy`: Copia una cadena asegurando la terminación en nulo.
*   `ft_strlcat`: Concatena cadenas asegurando la terminación en nulo.
*   `ft_strchr`: Localiza la primera ocurrencia de un carácter en una cadena.
*   `ft_strrchr`: Localiza la última ocurrencia de un carácter en una cadena.
*   `ft_strncmp`: Compara dos cadenas hasta una longitud determinada.
*   `ft_strnstr`: Localiza una subcadena dentro de otra cadena.
*   `ft_strdup`: Duplica una cadena reservando memoria dinámica.

### 4. Funciones Adicionales (Conversión y Generación)
*   `ft_atoi`: Convierte una cadena de caracteres a un número entero.
*   `ft_itoa`: Convierte un número entero a una cadena de caracteres.
*   `ft_substr`: Extrae una subcadena de una cadena principal.
*   `ft_strjoin`: Concatena dos cadenas en una nueva zona de memoria.
*   `ft_strtrim`: Elimina caracteres específicos del inicio y final de una cadena.
*   `ft_split`: Divide una cadena en subcadenas usando un carácter delimitador.
*   `ft_strmapi`: Aplica una función a cada carácter de una cadena creando una nueva.
*   `ft_striteri`: Aplica una función a cada carácter de una cadena modificándola in-situ.

### 5. Funciones de Escritura (Descriptores de Archivo)
*   `ft_putchar_fd`: Escribe un carácter en un descriptor de archivo dado.
*   `ft_putstr_fd`: Escribe una cadena en un descriptor de archivo dado.
*   `ft_putendl_fd`: Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
*   `ft_putnbr_fd`: Escribe un número entero en un descriptor de archivo dado.

### 6. Funciones de Listas Enlazadas
*   `ft_lstnew`: Crea un nuevo nodo de lista.
*   `ft_lstadd_front`: Añade un nodo al principio de la lista.
*   `ft_lstsize`: Cuenta el número de nodos de la lista.
*   `ft_lstlast`: Devuelve el último nodo de la lista.
*   `ft_lstadd_back`: Añade un nodo al final de la lista.
*   `ft_lstdelone`: Elimina y libera el contenido de un nodo individual.
*   `ft_lstclear`: Elimina y libera una lista completa y todos sus nodos.
*   `ft_lstiter`: Itera una lista y aplica una función al contenido de cada nodo.
*   `ft_lstmap`: Itera una lista y crea una nueva lista aplicando una función a cada nodo.

## Instrucciones

### Requisitos previos
*   Compilador `cc` o (`clang`/`gcc`).
*   Herramienta `make`.
*   Sistema operativo compatible con POSIX (Linux, macOS).

### Compilación e Instalación
Para compilar la librería completa (incluyendo los archivos base), ejecuta por terminal el siguiente comando en la raíz del repositorio:

``` make ```

Esto generará el archivo de librería estática obligatorio llamado `libft.a`.

**Reglas disponibles en el Makefile:**
*   `make`: Compila todas las funciones del proyecto libft.
*   `make clean`: Elimina todos los archivos objeto (`.o`) del directorio.
*   `make fclean`: Elimina los archivos objeto y el archivo final compilado (`libft.a`).
*   `make re`: Realiza una limpieza completa y vuelve a compilar todo el proyecto. (ejecuta: fclean -> clean -> make)

### Ejecución y Uso
Para integrar esta librería en tus propios proyectos de C, añade el archivo de cabecera en tus scripts de código:

``` #include "libft.h" ```

Al compilar tu aplicación o programa principal, enlaza la librería compilada especificando su ruta. Ejemplo:

``` gcc -Wall -Wextra -Werror main.c libft.a -o mi_programa ```

## Recursos

### Documentación y Referencias
*   Manuales de programador de Linux (Man pages)(https://man7.org): Documentación oficial del comportamiento de funciones estándar de C.
*   Programming C Language Library (https://cplusplus.com/reference/clibrary/)(www.geeksforgeeks.org): Conceptos clave sobre punteros, strings y la gestión básica de memoria en C.

### Uso de Inteligencia Artificial
En cumplimiento estricto con las directrices del proyecto, se detalla el uso de asistentes de IA generativa:
*   **Tareas:** Se utilizó IA de forma puntual para la generación de casos de prueba automatizados.
*   **Partes del proyecto:** Aplicado en el diseño conceptual del flujo de liberación de memoria (free) en caso de fallo intermedio dentro de `ft_split` y `ft_lstmap`. Todo el código final de las funciones de la `libc` fue programado manualmente de forma íntegra.

