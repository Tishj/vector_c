/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/11 23:31:23 by tbruinem      #+#    #+#                 */
/*   Updated: 2021/04/26 11:46:56 by tbruinem      ########   odam.nl         */
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
}					t_vec;

void				util_memmove(void *dest, void *src, size_t n);
void				util_memcpy(void *dest, void *src, size_t n);
size_t				util_strlen(char *str);

void				*vec_getref(t_vec *vec, size_t index);
int					vec_nullterm(t_vec *vec);
int					vec_realloc(t_vec *vec, size_t amount);
int					vec_insert(t_vec *vec, void *buff, size_t amount,
								size_t index);
int					vec_add(t_vec *vec, void *buff, size_t amount);
int					vec_destroy(t_vec *vec);
int					vec_new(t_vec *vec, size_t typesize);

#endif
