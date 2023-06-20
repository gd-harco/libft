
#include "str.h"

void ft_sort_array(char **array_to_sort)
{
	int i;
	int j;
	char *temp;

	i = 0;
	while (array_to_sort[i])
	{
		j = i + 1;
		while (array_to_sort[j])
		{
			if (ft_strcmp(array_to_sort[i], array_to_sort[j]) > 0)
			{
				temp = array_to_sort[i];
				array_to_sort[i] = array_to_sort[j];
				array_to_sort[j] = temp;
			}
			j++;
		}
		i++;
	}
}
