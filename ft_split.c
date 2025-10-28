/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:33:22 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/24 18:49:49 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	size_t	i;	
	size_t	counter;

	i = 0;
	if (s[i] != c)
		counter = 1;
	else
		counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			counter++;
		i++;
	}
	return (counter);
}

static void	free_tab(char **tab)
{
	size_t	i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	t_split	t;

	t.i = 0;
	t.array = ft_calloc(ft_countwords(s, c) + 1, sizeof(char *));
	if (!t.array)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			t.j = 0;
			while (s[t.j] != '\0' && s[t.j] != c)
				t.j++;
			t.array[t.i] = ft_calloc(t.j + 1, sizeof(char));
			if (!t.array[t.i])
				free_tab(t.array);
				return (NULL);
			ft_memcpy(t.array[t.i], s, t.j);
			t.i++;
			s += t.j;
		}
	}
	return (t.array);
}
