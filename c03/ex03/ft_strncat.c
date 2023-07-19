:Stdheader

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

/*#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Uma coisa";
    const char src[15] = " é uma coisa";
    
    ft_strncat(dest, src, 50);
    
    printf("%s\n", dest);
    
    return 0;
}*/