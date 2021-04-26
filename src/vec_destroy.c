/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vec_destroy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/04 22:58:27 by tbruinem      #+#    #+#                 */
/*   Updated: 2021/04/26 11:41:27 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

int		vec_destroy(t_vec *vec)
{
	free(vec->data);
	vec->capacity = 0;
	vec->len = 0;
	vec->size = 0;
	return (1);
}
