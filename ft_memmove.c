/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:33:49 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:33:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The memmove() function copies n bytes from memory area src to memory area dest. 
The memory areas may overlap: copying 
takes place as though the bytes in src are first copied 
into a temporary array that does not overlap
 src or dest, and the bytes are then copied from 
the temporary array to dest.

The memmove() function returns a pointer to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*memsrc;
	unsigned char		*memdest;

	memsrc = (const unsigned char *)src;
	memdest = (unsigned char *)dest;
	if (memsrc == memdest || n == 0)
		return (dest);
	if (memdest < memsrc || memdest >= (memsrc + n))
	{
		while (n--)
			*memdest++ = *memsrc++;
	}
	else
	{
		memdest += n - 1;
		memsrc += n - 1;
		while (n--)
			*memdest-- = *memsrc--;
	}
	return (dest);
}
/* int	main()
{
	char str1[] = "Gustavo";
	char str2[] = "Siqueira";
	ft_memmove(str1 + 2, str2, 3);
	printf("%s\n", str1);
	memmove(str1 + 2, str2, 3);
	printf("%s", str1);
	return (0);
} */