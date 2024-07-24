int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		r *= 10;
		r += nptr[i] - '0';
		i++;
	}
	return (r * s);
}
