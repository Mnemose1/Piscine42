:Stdheader

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

/*#include <stdio.h>

int main() {
    char texto[] = "Uma coisa é uma coisa, outra coisa é outra coisa.";
    int numero_de_caracteres = ft_strlen(texto);
    printf("O número de caracteres na string é: %d\n", numero_de_caracteres);
    return 0;
}*/