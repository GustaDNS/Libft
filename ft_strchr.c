/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:37:46 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:37:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	The strchr() function returns a pointer to the first occurrence
    of the character c in the string s.

	The strchr() and strrchr() functions return a pointer to the
    matched character or NULL if the character is not found.  The
    terminating null byte is considered part of the string, so that
    if c is specified as '\0', these functions return a pointer to
    the terminator.
*/
char	*ft_strchr(const char *str, int r)
{
	int		i;
	char	*p;

	p = (char *)str;
	i = 0;
	while ((unsigned char)str[i] != (unsigned char)r)
	{
		if (!str[i])
			return (0);
		i++;
		p++;
	}
	return (p);
}
/* int	main()
{
	char *s = "Gustavo";
	char c = 'u';
	printf("%s\n", ft_strchr(s, c));
	printf("%s", strchr(s, c));
	return(0);
} */