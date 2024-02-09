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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] < p2[i])
			return (-1);
		else if (p1[i] > p2[i])
			return (1);
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