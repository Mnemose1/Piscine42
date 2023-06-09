:Stdheader

//#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
        i++;
    }
    return 1;
}

/*int main()
{
    char str1[] = "123";
    char str2[] = "Esse bagulho ai 123";
    
    int result1 = ft_str_is_numeric(str1);
    int result2 = ft_str_is_numeric(str2);
    
    printf("String 1: %s\n", str1);
    printf("Result 1: %d\n", result1);
    
    printf("String 2: %s\n", str2);
    printf("Result 2: %d\n", result2);
    
    return 0;
}*/
