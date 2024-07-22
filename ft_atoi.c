/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 07:03:14 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/19 08:13:55 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static int	is_overflow(long long num, int c)
{
	return (num > (LONG_MAX - c) / 10);
}

static int	is_underflow(long long num, int c)
{
	return (num < (LONG_MIN + c) / 10);
}

int	ft_atoi(const char *str)
{
	long long	result;
	int			minus;

	result = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (is_overflow(result * minus, *str - '0'))
			return ((int)LONG_MAX);
		else if (is_underflow(result * minus, *str - '0'))
			return ((int)LONG_MIN);
		result = result * 10 + (*str++ - '0');
	}
	return (result * minus);
}

// #include <stdio.h>
// #include <ctype.h> 

// int main() {
//     printf("%d\n", ft_atoi("12345")); // 12345
//     printf("%d\n", ft_atoi("   -12345")); // -12345
//     printf("%d\n", ft_atoi("12345abc")); // 12345
//     printf("%d\n", ft_atoi("-9223372036854775809")); // LONG_MIN
//     printf("%d\n", ft_atoi("9223372036854775808")); // LONG_MAX

//     return 0;
// }
