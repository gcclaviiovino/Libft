int	ft_tolower(int lett)
{
	if (lett >= 'A' && lett <= 'Z')
		lett = lett + 32;
	return (lett);
}