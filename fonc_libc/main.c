#include <stdio.h>
#include <string.h>

int	ft_strlen(char *s);
int ft_strcmp(char *s1, char *s2);
char *ft_strstr(char *sourcestring, char *tofind);

void main()
{
	char *string = "Hello There";
	char *string2 = "llo  The";

	printf("===================ft_strlen===================\n");
	printf("Mon résultat : %d\n", ft_strlen(string));
	printf("Fonction de string.h : %ld\n", strlen(string));
	printf("===================ft_strcmp===================\n");
	printf("Mon résultat : %d\n", ft_strcmp(string, string2));
	printf("Fonction de string.h : %d\n", strcmp(string, string2));
	printf("===================ft_strstr===================\n");
	printf("Mon résultat : %s\n", ft_strstr(string, string2));
	printf("Fonction de string.h : %s\n", strstr(string, string2));


	return ;
}
