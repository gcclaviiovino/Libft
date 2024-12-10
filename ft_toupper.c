int	ft_toupper(int lett)
{
	if (lett >= 'a' && lett <= 'z')
		lett = lett - 32;
	return (lett);
}