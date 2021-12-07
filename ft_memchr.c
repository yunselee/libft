/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunselee <yunselee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:53:55 by yunselee          #+#    #+#             */
/*   Updated: 2021/05/13 19:35:52 by yunselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sc;
	size_t				i;

	sc = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (*(sc + i) == (unsigned char)c)
			return ((void *)sc + i);
		i++;
	}
	return (NULL);
}
