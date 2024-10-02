/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:47:00 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/01 18:00:26 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest || !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		d[n] = s[n];
	return (dest);
}
