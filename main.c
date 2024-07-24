#include "libft.h"

int main(int ac, char **av)
{
	if (ac > 1)
		printf("ft_atoi = %d\n", ft_atoi(av[1]));
	if (ac > 2)
		printf("ft_isalpha = %d\n", ft_isalpha(av[2][0]));
	return (0);
}
