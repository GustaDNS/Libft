/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:52:32 by marvin            #+#    #+#             */
/*   Updated: 2024/01/13 13:52:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if(c >= 65 && c <= 90)
    	return(1);
    if(c >= 97 && c <= 122)
        return(2);
    return(0);
}
/* int	main()
{
	printf("%d\n", ft_isalpha('j'));
    printf("%d\n", isalpha('j'));
    printf("%d\n", ft_isalpha('Z'));
    printf("%d", isalpha('Z'));
    return(0);

} */