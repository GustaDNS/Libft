/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:44:30 by marvin            #+#    #+#             */
/*   Updated: 2024/01/13 14:44:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The memset() function fills the first n bytes of the 
memory area pointed to by s with the constant byte c.

The memset() function returns a pointer to the memory area s.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	value = (unsigned char)c;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (s);
}

/* int	main()
{
	char str[50] = "Gustavo This is memset";
	puts(str);
	ft_memset(str, '-', 7);
	puts(str);
	return(0);
} */