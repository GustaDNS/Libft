/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:26:49 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:26:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
The memcmp() function compares the first n bytes 
(each interpreted as unsigned char) of the memory areas s1 and s2.

The memcmp() function returns an integer less than, equal to, or greater than
zero if the first n bytes of s1 
is found, respectively, to be less than, 
to match, or be greater than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of the difference 
between the first pair of bytes 
(interpreted as unsigned char) that differ in s1 and s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
/* int	main()
{
	char str1[] = "Hello";
	char str2[] = "aello";
	int n = 5;
	printf("%d\n", ft_memcmp(str1, str2, n));
	printf("%d\n", memcmp(str1, str2, n));
	return (0);
} */