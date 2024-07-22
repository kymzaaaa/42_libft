/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:44:39 by kayamaza          #+#    #+#             */
/*   Updated: 2024/05/12 16:33:09 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

// #include <string.h>
// #include <stdio.h>
// int main(){
//     printf("%zu",ft_strlen("123456789"));
//     printf(",");
//     printf("%zu",strlen("123456789"));
//     printf("\n");
// }