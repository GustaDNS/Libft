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

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	i = 0;
	p = (unsigned char *)ptr;
	value = (unsigned char)x;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (ptr);
}

/* int	main()
{
	char str[50] = "Gustavo This is string.h library function";
	puts(str);
	ft_memset(str, '$', 7);
	puts(str);
	return(0);
} */