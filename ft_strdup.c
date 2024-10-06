/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:44:18 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/06 16:22:16 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* allocate memory and duplicate the string. */
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*s2;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	s2 = malloc(len);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s, len);
	return (s2);
}
