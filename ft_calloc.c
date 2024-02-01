/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:16:43 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:16:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/* int	main()
{
	char *str;
	str = (char *) ft_calloc(15, sizeof(char));
	strcpy(str, "Gustavo");
	printf("String: %s, Address: %p\n", str, str);
	str = (char *) ft_calloc(15, sizeof(char));
	strcpy(str, "Gustavo");
	printf("String: %s, Address: %p\n", str, str);
	return (0);
} */