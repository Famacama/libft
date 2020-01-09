/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 15:54:00 by marvin            #+#    #+#             */
/*   Updated: 2020/01/09 15:54:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;
    unsigned char *t;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    while (s[i])
    {
        t[i] = s[i];
        i++;
    }
    i = 0;
    while (t[i])
    {
        d[i] = t[i];
        i++;
    }
    return((unsigned char *)dest);
}

int main()
{
    
}