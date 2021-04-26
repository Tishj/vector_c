/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_new.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 22:52:46 by tbruinem      #+#    #+#                 */
/*   Updated: 2021/04/26 11:43:35 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

int		vec_new(t_vec *vec, size_t typesize)
{
	vec->capacity = 8;
	vec->data = malloc(typesize * vec->capacity);
	if (!vec->data)
		return (0);
	vec->len = 0;
	vec->size = typesize;
	return (1);
}
