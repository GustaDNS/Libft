/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:04:25 by marvin            #+#    #+#             */
/*   Updated: 2024/01/13 14:04:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*int   main()
{
	printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('0'));
    printf("%d\n", ft_isalnum('9'));
    printf("%d\n", isalnum('a'));
    printf("%d\n", isalnum('A'));
    printf("%d\n", isalnum('0'));
    printf("%d\n", isalnum('9'));
	return(0);
} */