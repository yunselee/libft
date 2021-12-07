/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunselee <yunselee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:47:48 by yunselee          #+#    #+#             */
/*   Updated: 2021/06/23 14:51:45 by yunselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			get_len(long int nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	int			len;
	int			sign;
	char		*c;
	long long	abs_n;

	abs_n = (n < 0) ? (long long)n * -1 : n;
	sign = (n >= 0) ? 0 : 1;
	len = get_len(abs_n) + sign;
	if ((c = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	c[len] = '\0';
	len--;
	while (len - sign >= 0)
	{
		c[len] = '0' + (abs_n % 10);
		abs_n = (abs_n / 10);
		len--;
	}
	if (sign == 1)
		c[0] = '-';
	return (c);
}
