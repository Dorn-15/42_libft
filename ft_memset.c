/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:14:31 by adoireau          #+#    #+#             */
/*   Updated: 2024/09/30 17:51:58 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*bytes;

	i = 0;
	bytes = (unsigned char *)dest;
	while (i < n)
	{
		bytes[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
