/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwopa <sungwopa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:09:22 by sungwopa          #+#    #+#             */
/*   Updated: 2021/05/03 18:54:41 by sungwopa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  len_int(long n, size_t cnt)
{
    printf("n : %ld\n", n);
    if (n < 0)
    {
        cnt++;
        n *= -1;
    }
    if (n  == 0)
        return cnt;
    return len_int(n / 10, cnt + 1); 
}

static char    *int_to_a(char *ptr, long n, size_t len)
{
    if (n < 0)
    {
        ptr[0] = '-';
        n *= -1;
    }
    if (n == 0)
        return ptr;
    ptr[len - 1] = '0' + n % 10;
    return int_to_a(ptr, n / 10, len - 1);
}

char    *ft_itoa(int n)
{
    size_t  len;
    char    *ptr;
    long    dum_n;

    dum_n = n;
    len = len_int(dum_n, 0);
    printf("len : %zu\n", len);
    ptr = malloc(len * sizeof(char));
    if (ptr == NULL)
        return NULL;
    return int_to_a(ptr, dum_n, len);
}