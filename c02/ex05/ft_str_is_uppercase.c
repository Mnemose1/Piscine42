:Stdheader

//#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
        i++;
    }
    return 1;
}

/*int main()
{
    char str1[] = "esse bagulho ai";
    char str2[] = "Esse bagulho ai";
    
    int result1 = ft_str_is_uppercase(str1);
    int result2 = ft_str_is_uppercase(str2);
    
    printf("String 1: %s\n", str1);
    printf("Result 1: %d\n", result1);
    
    printf("String 2: %s\n", str2);
    printf("Result 2: %d\n", result2);
    
    return 0;
}*/
