:Stdheader

#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

/*int main() {
    char texto[] = "Uma coisa é uma coisa, outra coisa é outra coisa";
    ft_putstr(texto);
    return 0;
}*/