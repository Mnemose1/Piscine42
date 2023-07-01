:Stdheader

//#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main() {
    char source[] = "Uma coisa é uma coisa outra coisa é outra coisa";
    char destination[20];

    ft_strncpy(destination, source, 7);
    printf("String copiada: %s\n", destination);

    return 0;
}*/