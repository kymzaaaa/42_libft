/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:49:34 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/19 09:06:00 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	num;
	char		*res;
	size_t		len;

	num = n;
	len = ft_numlen(num);
	res = (char *)malloc(sizeof(char) * (len +1));
	if (!res)
		return (0);
	res[len--] = '\0';
	if (num == 0)
		*res = '0';
	if (num < 0)
	{
		num *= -1;
		*res = '-';
	}
	while (num > 0)
	{
		res[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
