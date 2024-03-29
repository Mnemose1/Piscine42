:Stdheader

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ') {
        i++;
    }
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}

/*#include <stdio.h>

int main() {
    char texto[] = "  -1234ab567";
    int numero = ft_atoi(texto);
    printf("O número inteiro convertido é: %d\n", numero);
    return 0;
}*/