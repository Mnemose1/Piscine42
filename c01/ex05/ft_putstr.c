:Stdheader

//#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

/*int main(void)
{ 
    char str[100];

    printf("\nDigite uma string: ");
    scanf("%99s", str);

    ft_putstr(str);
    return 0;
}*/