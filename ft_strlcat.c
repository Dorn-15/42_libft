/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:41:56 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/03 17:37:05 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/* Appends src to dst of size dsize; returns total length. */
size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	if (dsize <= len_dst)
		return (dsize + len_src);
	while (src[j] && (i < dsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_dst + len_src);
}
