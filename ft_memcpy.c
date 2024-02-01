/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:32:39 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:32:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The memcpy() function copies n bytes from memory 
area src to memory area dest. The memory areas must not overlap

The memcpy() function returns a pointer to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*memsrc;
	unsigned char		*memdest;

	i = 0;
	memsrc = (const unsigned char *)src;
	memdest = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	while (n--)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (dest);
}
/* int	main()
{
	char src[50] = "Gustavo Daniel";
	char dest[50];
	
	memcpy(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}
 */