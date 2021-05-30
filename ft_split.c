/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebrovard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:34:18 by ebrovard          #+#    #+#             */
/*   Updated: 2021/01/16 13:55:11 by ebrovard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION:
**	Allocates (with malloc(3)) and returns an array of strings obtained by
** splitting ’s’ using the character ’c’ as a delimiter.  The array must be
** ended by a NULL pointer.
**
** RETURN VALUES:
**	The array of new strings resulting from the split. NULL if the allocation
** fails.
*/

#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**cpyandstore(const char *s, char c, char **splitted, size_t wordnb)
{
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	k = 0;
	while (i < wordnb)
	{
		if (s[k] != c)
		{
			len = k;
			while (s[len] && s[len] != c)
				len++;
			splitted[i] = (char *)malloc(sizeof(char) * (len - k + 1));
			if (splitted[i] == NULL)
				return (NULL);
			ft_strlcpy(splitted[i], &s[k], (len - k + 1));
			i++;
			k = len;
		}
		else
			k++;
	}
	return (splitted);
}

char	**ft_split(const char *s, char c)
{
	char	**splitted;
	size_t	wordnb;

	if (!s)
		return (NULL);
	wordnb = ft_count_word(s, c);
	splitted = (char **)malloc(sizeof(char *) * (wordnb + 1));
	if (!(splitted))
		return (NULL);
	splitted[wordnb] = NULL;
	return (cpyandstore(s, c, splitted, wordnb));
}
