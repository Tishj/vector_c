/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   util_strdup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tishj <tishj@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 18:13:25 by tishj         #+#    #+#                 */
/*   Updated: 2021/04/26 11:46:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vector.h"

char	*util_strdup(char *str)
{
	size_t	len;
	char	*dup;

	len = util_strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	util_memcpy(dup, str, len + 1);
	return (dup);
}
