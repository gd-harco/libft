int	ft_strlen(char *s)
{
	int	size;

	size = 0;
	while(s[size] != '\0')
		size++;
	return size;
}
