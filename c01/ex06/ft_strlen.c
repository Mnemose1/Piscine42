:Stdheader

//#include <stdio.h>

int    ft_strlen.c(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

/*int main(void)
{ 
    char str[100];

    printf("Digite uma string: ");
    scanf("%99s", str);
  
    int length = ft_strlen(str);
  
    printf("O comprimento da string é: %d\n", length);
  
    return 0;
}*/