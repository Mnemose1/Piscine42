:Stdheader

//#include <stdio.h>

void ft_putstr_non_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            str[i] = '\\';
        i++;
    }
    return str[i];
}

/*int main()
{
    char str1[] = "Ola\nesta bem?";
    char str2[] = "Ola, esta bem?";
    
    int result1 =  ft_putstr_non_printable(str1);
    int result2 =  ft_putstr_non_printable(str2);
    
    printf("String 1: %s\n", str1);
    printf("Result 1: %d\n", result1);
    
    printf("String 2: %s\n", str2);
    printf("Result 2: %d\n", result2);
    
    return 0;
}*/