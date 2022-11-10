ft_required = fonc_libc/ft_*.c fonc_supp/ft_*.c

main
	gcc -c -Wall -Werror -Wextra $(ft_required)
	ar rcs libft.a *.o
