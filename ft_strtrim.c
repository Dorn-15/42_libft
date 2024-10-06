/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:09:11 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/06 16:21:43 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_trimlen(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_trimlen(s1, set);
	trimed = malloc((len + 1) * sizeof(char));
	if (!trimed)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			trimed[j] = s1[i];
			j++;
		}
		i++;
	}
	trimed[j] = '\0';
	return (trimed);
}
