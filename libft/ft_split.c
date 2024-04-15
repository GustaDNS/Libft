/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudaniel <gudaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:41:54 by marvin            #+#    #+#             */
/*   Updated: 2024/04/15 15:57:03 by gudaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && str[i])
			words += 1;
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
	}
	return (words);
}

static void	ft_sub_matrix(char **matrix,
							const char *str, int number_strs, char sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (i < number_strs)
	{
		while (str[j] && str[j] == sep)
			j++;
		while (str[j] && str[j] != sep)
		{
			len++;
			j++;
		}
		matrix[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!matrix[i])
			return ;
		len = 0;
		i++;
	}
}

char	**ft_split(const char *str, char c)
{
	int		words;
	int		i;
	int		j;
	int		a;
	char	**split;

	words = ft_word_count(str, c);
	split = (char **)malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	ft_sub_matrix(split, str, words, c);
	i = 0;
	j = 0;
	while (str[i] && j != words)
	{
		a = 0;
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
			split[j][a++] = str[i++];
		split[j][a] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}
// int main(int ac, char **av)
// {
//  (void)ac;
//  char **str = ft_split(av[1], ' ');
//  int i = 0;
//  while (str[i])
//      printf("%s\n", str[i++]);
//  return (0);
// }