#include<string.h>

void *ft_print_memory(void *addr, unsigned int size);
int main(void)
{
	char str[] = "Bonjour les amin ches\n\t\rc est fo u.tout.ce qu on peut faire avec.n..print_memory....lol.lol\t\v\f\n";
	int len = strlen(str);
	ft_print_memory((void *)str, len);
	return (0);
}
