/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_getref.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 22:52:06 by tbruinem      #+#    #+#                 */
/*   Updated: 2022/02/17 16:30:12 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

void	*vec_getref(Vector *vec, size_t index)
{
	if (index > vec->len)
		return (NULL);
	return (vec->data + (vec->size * index));
}
