:Stdheader

//#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            return 0;
        i++;
    }
    return 1;
}

/*int main()
{
    char str1[] = "Uma coisa";
    char str2[] = "Outra\coisa";
    
    int result1 = ft_str_is_printable(str1);
    int result2 = ft_str_is_printable(str2);
    
    printf("String 1: %s\n", str1);
    printf("Result 1: %d\n", result1);
    
    printf("String 2: %s\n", str2);
    printf("Result 2: %d\n", result2);
    
    return 0;
}*/
