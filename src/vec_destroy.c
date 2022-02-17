/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_destroy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 22:58:27 by tbruinem      #+#    #+#                 */
/*   Updated: 2022/02/17 16:30:12 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

int		vec_destroy(Vector *vec)
{
	free(vec->data);
	vec->capacity = 0;
	vec->len = 0;
	vec->size = 0;
	return (1);
}
