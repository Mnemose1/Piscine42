:Stdheader

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0' && i < size) {
        i++;
    }

    unsigned int available_space = size - i;

    while (src[j] != '\0') {
        j++;
    }

     if (available_space > 1) {
        unsigned int k = 0;
        while (src[k] != '\0' && k < (available_space - 1)) {
            dest[i] = src[k];
            i++;
            k++;
        }
        dest[i] = '\0';
    }

    return i + j;
    }

    /*#include <stdio.h>

    int main() {
    char dest[20] = "Uma coisa, ";
    const char src[] = "outra coisa.";
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Length of the concatenated string: %u\n", result);

    return 0;
}*/