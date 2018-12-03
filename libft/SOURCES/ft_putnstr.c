void	ft_putnstr(char const *str, size_t size)
{
	size_t i = 0;

	while (str && *str && i < size)
	{
		write(1, str++, 1);
		i++;
	}
}