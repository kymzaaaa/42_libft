/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:22:56 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/19 00:12:33 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <ctype.h>
// #include <stdio.h>
// int main(){
//     for(int i= 0; i<127; i++){
//        printf("%d",ft_isprint(i)); 
//        printf(","); 
//        printf("%d",isprint(i)); 
//        printf("\n"); 
//     }
// }