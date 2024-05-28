/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmarqu <danmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:46:31 by danmarqu          #+#    #+#             */
/*   Updated: 2024/05/27 15:14:48 by danmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

// Parte 1

/**
 * @brief Devuelve un valor distinto de cero si "c" es una letra minúscula
 *  "a-z" o mayúscula "A-Z", o cualquier otro carácter alfabético local.
 * 
 * @param c 
 * @return int 
 */
int		ft_isalpha(int c);

/**
 * @brief Devuelve un valor distinto de cero si "c" es cualquiera de
 *  los dígitos decimales (0-9).
 * 
 * @param c 
 * @return int 
 */
int		ft_isdigit(int c);

/**
 * @brief Devuelve un valor distinto de cero si "c" es una letra
 *  minúscula "a-z" o mayúscula "A-Z", uno de los dígitos decimales
 *  "0-9" o cualquier otro carácter alfabético local.
 * 
 * @param c 
 * @return int 
 */
int		ft_isalnum(int c);

/**
 * @brief Comprueba si esta en la tabla ascii
 * 
 * @param c 
 * @return int
 */
int		ft_isascii(int c);

/**
 * @brief Devuelve un valor distinto de cero si "c" es cualquier 
 * carácter imprimible, incluyendo el "espacio".
 * 
 * @param c 
 * @return int 
 */
int		ft_isprint(int c);

/**
 * @brief Devuelve el número de caracteres de la cadena "s",
 *  sin incluir el nulo de terminación.
 * 
 * @param s 
 * @return size_t 
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Almacena "(unsigned char) c" en cada uno de los elementos
 *  del "array de unsigned char" que empieza en "s" y tiene "n" 
 *  elementos. Devuelve "s".
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief The bzero() function writes n zeroed bytes to the string s.
 *  If n is zero, bzero() does nothing.
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Copia el "array de char" que empieza en "s2" en el 
 * "array de char" que empieza en "s1". Devuelve "s1".
 * 
 * @param s 
 * @param n 
 */
void	*ft_memcpy(void *s1, const void *s2, size_t n);

/**
 * @brief Tiene el mismo efecto que "memcpy", pero actúa incluso si 
 * los "arrays" se solapan. En este caso, se accede a cada valor de
 *  "s2" antes de almacenar un nuevo valor en ese elemento.
 * 
 * @param dst 
 * @param src 
 * @param len 
 * @return void* 
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief copies up to dstsize - 1 characters from the string src to dst,
 * NUL-terminating the result if dstsize is not 0.
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return size_t 
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief converts a lower-case letter to the corresponding
     upper-case letter.  The argument must be representable as an unsigned
     char or the value of EOF.
 * 
 * @param c 
 * @return int 
 */
int		ft_toupper(int c);

/**
 * @brief  converts an upper-case letter to the corresponding
     lower-case letter.  The argument must be representable as an unsigned
     char or the value of EOF.
 * 
 * @param c 
 * @return int 
 */
int		ft_tolower(int c);

/**
 * @brief Busca el primer elemento de la cadena "s" que sea igual a "(char)c".
 * Considera el nulo determinación como parte de la cadena. En caso de éxito,
 *  devuelve la dirección del elemento emparejado; en caso contrario, 
 *  devuelve un puntero nulo.
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Busca el último elemento de la cadena "s" que es igual a "(char)c".
 *  En caso de éxito, devuelve la dirección de tal elemento; en caso 
 *  contrario, devuelve un puntero nulo.
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Compara los elementos de las cadenas "s1" y "s2" hasta que 
 * encuentra alguno diferente o hasta que se han comparado "n" elementos.
 *  Si todos los elementos son iguales, devuelve 0. Si el elemento diferente
 *  de "s1" es mayor que el de "s2" (tomados como "unsigned char"), devuelve un
 * número positivo. En caso contrario, devuelve un número negativo.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Busca el primer elemento de un "array de unsigned char" que es igual
 *  a "(unsigned char) c". El "array" comienza en "s" y tiene "n" elementos.
 * En caso de éxito, devuelve la dirección de elemento buscado; en caso 
 *  contrario, devuelve un puntero nulo.
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compara los elementos de dos "arrays de unsined char", con 
 * direcciones base "s1" y "s2", y "n" elementos, hasta que encuentra
 *  elementos diferentes. Si todos los elementos son iguales, devuelve 0.
 *  Si el elemento diferente de "s1" es mayor que el de "s2", devuelve 
 * un valor positivo; en caso contrario, devuelve un valor negativo.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.
 * 
 * @param haystack 
 * @param needle 
 * @param len 
 * @return char* 
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Convierte los caracteres de la cadena "s" a la representación 
 * interna de tipo "int" y devuelve ese valor. Es semejante a
 * "(int)strtol(s,NULL,10)", pero no se almacena código de error en "errno".
 * 
 * @param str 
 * @return int 
 */
int		ft_atoi(const char *str);

/**
 *
 * 
 * 
 * // Funciones con malloc()
 * 
 * 
 * 
 */

/**
 * @brief Asigna una localización en memoria a un objeto de datos
 *  "array" que contiene "nelem" elementos 
 * de tamaño "longitud", asigna ceros a todos los "bytes" del "array"
 * y devuelve la dirección del primer elemento en caso de éxito;
 *  en caso contrario, devuelve un puntero nulo.
 * 
 * @param count 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).

    If insufficient memory is available, NULL is returned
 * 
 * @param s1 
 * @return char* 
 */
char	*ft_strdup(const char *s1);

/**
 * 
 * 
 * 
 * PARTE 2
 * 
 * 
 * 
 */

/**
 * @brief Reserva (con malloc(3)) y devuelve una substring de
la string ’s’. La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)
 * 
 * @param s1 
 * @param set 
 * @return char* 
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
 * 
 * @param s 
 * @param c 
 * @return char** 
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.
 * 
 * @param n 
 * @return char* 
 */
char	*ft_itoa(int n);

/**
 * @brief A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’.
 * 
 * @param s 
 * @param f 
 * @return char* 
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.
 * 
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Envía el carácter ’c’ al file descriptor
especificado.
 * 
 * @param c 
 * @param fd 
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Envía la string ’s’ al file descriptor
especificado.
 * 
 * @param s 
 * @param fd 
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Envía la string ’s’ al file descriptor dado,
seguido de un salto de línea.
 * 
 * @param s 
 * @param fd 
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Envía el número ’n’ al file descriptor dado.
 * 
 * @param n 
 * @param fd 
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * 
 * 
 * 
 * BONUS
 * 
 * 
 */

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;
// /**
//  * t_list	*test;
//  test->name = "hola";
//  printf("%s", test->name);
// test = test->next;
//  test->name = "adios";
//  * 
//  */
// /**
//  * @brief Crea un nuevo nodo utilizando malloc(3). La
// variable miembro ’content’ se inicializa con el
// contenido del parámetro ’content’. La variable
// ’next’, con NULL.
//  * 
//  * @param content 
//  * @return t_list* 
//  */
// t_list	*ft_lstnew(void *content);

// /**
//  * @brief Añade el nodo ’new’ al principio de la lista ’lst’.
//  * 
//  * @param lst 
//  * @param new 
//  */
// void	ft_lstadd_front(t_list **lst, t_list *new);

// /**
//  * @brief Cuenta el número de nodos de una lista. 
//  * 
//  * @param lst 
//  * @return int 
//  */
// int		ft_lstsize(t_list *lst);

// /**
//  * @brief Devuelve el último nodo de la lista.
//  * 
//  * @param lst 
//  * @return t_list* 
//  */
// t_list	*ft_lstlast(t_list *lst);

// /**
//  * @brief Añade el nodo ’new’ al final de la lista ’lst’.
//  * 
//  * @param lst 
//  * @param new 
//  */
// void	ft_lstadd_back(t_list **lst, t_list *new);

// /**
//  * @brief Toma como parámetro un nodo ’lst’ y libera la
// memoria del contenido utilizando la función ’del’
// dada como parámetro, además de liberar el nodo. La
// memoria de ’next’ no debe liberarse.
//  * 
//  * @param lst 
//  * @param del 
//  */
// void	ft_lstdelone(t_list *lst, void (*del)(void *));

// /**
//  * @brief Elimina y libera el nodo ’lst’ dado y todos los
// consecutivos de ese nodo, utilizando la función
// ’del’ y free(3).
// Al final, el puntero a la lista debe ser NULL.
//  * 
//  */
// void	ft_lstclear(t_list **lst, void (*del)(void *));

// /**
//  * @brief Itera la lista ’lst’ y aplica la función ’f’ en el
// contenido de cada nodo.
//  * 
//  * @param lst 
//  * @param f 
//  */
// void	ft_lstiter(t_list *lst, void (*f)(void *));

// /**
//  * @brief Itera la lista ’lst’ y aplica la función ’f’ al
// contenido de cada nodo. Crea una lista resultante
// de la aplicación correcta y sucesiva de la función
// ’f’ sobre cada nodo. La función ’del’ se utiliza
// para eliminar el contenido de un nodo, si hace
// falta.
//  * 
//  * @param lst 
//  * @param f 
//  * @param del 
//  * @return t_list* 
//  */
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif