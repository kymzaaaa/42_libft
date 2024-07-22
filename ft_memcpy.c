/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:24:29 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/15 00:42:26 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstp;
	unsigned char	*srcp;

	i = 0;
	if (!dst && !src)
		return (0);
	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	while (i < n)
	{
		dstp[i] = srcp[i];
		i++;
	}
	return (dstp);
}
