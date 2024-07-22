/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:39:31 by kayamaza          #+#    #+#             */
/*   Updated: 2024/05/12 16:32:15 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t count)
{
	char	*xs;

	xs = s;
	while (count--)
		*xs++ = c;
	return (s);
}

// #include <stdio.h>
// int main() {
//     char str[50] = "Hello, World!";
//     printf("Before memset: %s\n", str);

//     ft_memset(str, '*', 5); // 文字列を'*'で埋める

//     printf("After memset: %s\n", str);

//     return 0;
// }