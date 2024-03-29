:Stdheader

char    *ft_strcat(char *dest, char *src)
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
    const char *src = " é uma coisa";
    
    *ft_strcat(dest, src);
    
    printf(dest);
    
    return 0;
}*/