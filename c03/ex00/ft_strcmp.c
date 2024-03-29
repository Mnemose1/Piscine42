:Stdheader

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    
    while (str1[i] != '\0' || str2[i] != '\0') {
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
    char str1[] = "Uma coisa";
    char str2[] = "Uma outra coisa";
    
    int result = ft_strcmp(str1, str2);
    
    if (result == 0) {
        printf("As strings são iguais.\n");
    } else if (result < 0) {
        printf("A string str1 é menor que str2.\n");
    } else {
        printf("A string str1 é maior que str2.\n");
    }
    
    return 0;
}*/