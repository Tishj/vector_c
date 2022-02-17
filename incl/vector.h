/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:31:23 by tbruinem      #+#    #+#                 */
/*   Updated: 2022/02/17 16:30:12 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include <stdio.h>
# include <unistd.h>

typedef struct		s_vec
{
	char			*data;
	size_t			size;
	size_t			capacity;
	size_t			len;
}					Vector;

void				util_memmove(void *dest, void *src, size_t n);
void				util_memcpy(void *dest, void *src, size_t n);
size_t				util_strlen(char *str);

void				*vec_getref(Vector *vec, size_t index);
int					vec_nullterm(Vector *vec);
int					vec_realloc(Vector *vec, size_t amount);
int					vec_insert(Vector *vec, void *buff, size_t amount,
								size_t index);
int					vec_add(Vector *vec, void *buff, size_t amount);
int					vec_destroy(Vector *vec);
int					vec_new(Vector *vec, size_t typesize);

#endif
