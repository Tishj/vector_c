/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_getref.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 22:52:06 by tbruinem      #+#    #+#                 */
/*   Updated: 2021/04/26 11:43:22 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

void	*vec_getref(t_vec *vec, size_t index)
{
	if (index > vec->len)
		return (NULL);
	return (vec->data + (vec->size * index));
}
