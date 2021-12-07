/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunselee <yunselee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:07:06 by yunselee          #+#    #+#             */
/*   Updated: 2021/06/22 14:43:07 by yunselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	const char		*last;
	int				i;

	last = s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (last[i] == (char)c)
			return ((char*)last + i);
		i--;
	}
	return (NULL);
}
