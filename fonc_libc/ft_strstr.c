//trouve un string dans un autre
#include <string.h>

int	lookforstring(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] ||s2[x])
	{
		if (s1[x] == s2[x])
		{
			if(!(s2[x+1]))
				return 0;
			x++;
		}
		else
			return (1);
	}
	return (0);
}


char *ft_strstr(char *sourcestring, char *tofind)
{
	char *result;

	while (*sourcestring)
	{
		if (*sourcestring == tofind[0])
		{
			result = sourcestring;
			if (lookforstring(sourcestring, tofind) == 0)
				return (result);
		}
		*sourcestring++;
	}
	return (NULL);
}
