/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:16:26 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:16:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t x)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < x)
	{
		str[i] = '\0';
		i++;
	}
	return (ptr);
}

/* int	main() {
	char str[50] = "Gustavo This is memset";
	puts(str);
	ft_bzero(str, 7);
	puts(str);
	return(0);
} */