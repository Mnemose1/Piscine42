:Stdheader

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    
        while (str1[i] != '\0' || str2[i] != '\0' && i < n) {
            if (str1[i] != str2[i]) {
                return (str1[i] - str2[i]);
            }
            i++;
        }
    
    return 0;
}

/*#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Uma coisa maior";
    char str2[] = "Uma coisA";
    
    int result = ft_strncmp(str1, str2, 5);
    
    if (result == 0) {
        printf("Os primeiros 5 caracteres são iguais.\n");
    } else if (result < 0) {
        printf("Os primeiros 5 caracteres de str1 são menores que os de str2.\n");
    } else {
        printf("Os primeiros 5 caracteres de str1 são maiores que os de str2.\n");
    }
    
    return 0;
}*/