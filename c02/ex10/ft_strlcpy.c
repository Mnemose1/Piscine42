:Stdheader

//#include <stdio.h>
//#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    unsigned int size = 0;
    while (src[size] != '\0')
    {
        size++;
    }

    return size;
}

/*int main() {
    char src[] = "Uma coisa.";
    char dest[20];

    ft_strlcpy(dest, src, sizeof(dest));

    printf("String copiada: %s\n", dest);

    return 0;
}*/