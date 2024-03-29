:Stdheader

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    while (to_find[i] != '\0') {
        i++;
    }

    while (str[i] != '\0')
    {
        int k = 0;
        
        while (to_find[k] != '\0' && str[j + k] == to_find[k]) {
            k++;
        }
        if (to_find[k] == '\0') {
            return &str[j];
        }

        j++;
    }

    return NULL;
}

/*#include <stdio.h>

int main() {
    char str[20] = "Uma coisa é uma coisa";
    char to_find[10] = "Uma coisa";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("Substring encontrada: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}*/