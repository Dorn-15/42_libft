/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:05:16 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/03 13:11:57 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_test_atoi(void)
{
	const char	*num_str1 = "42";
	const char	*num_str2 = "-1234";
	const char	*num_str3 = "  \t\n  5678";

	printf("ft_atoi(\"42\"): %d\n", ft_atoi(num_str1));
	printf("ft_atoi(\"-1234\"): %d\n", ft_atoi(num_str2));
	printf("ft_atoi(\"5678\"): %d\n", ft_atoi(num_str3));
}

int	main(void)
{
	const char	*test_str = "Hello, World!";

	printf("ft_strlen: %zu = 13\n", ft_strlen(test_str));
	printf("ft_isprint('A'): %d =1\n", ft_isprint('A'));
	printf("ft_isprint(31): %d = 0\n", ft_isprint(31));
	printf("ft_isdigit('5'): %d = 1\n", ft_isdigit('5'));
	printf("ft_isdigit('a'): %d = 0\n", ft_isdigit('a'));
	printf("ft_isascii(65): %d = 1\n", ft_isascii(65));
	printf("ft_isascii(200): %d = 0\n", ft_isascii(200));
	printf("ft_isalpha('b'): %d = 1\n", ft_isalpha('b'));
	printf("ft_isalpha('1'): %d = 0\n", ft_isalpha('1'));
	printf("ft_isalnum('7'): %d = 1\n", ft_isalnum('7'));
	printf("ft_isalnum('@'): %d = 0\n", ft_isalnum('@'));
	ft_test_atoi();
	return (0);
}
