:Stdheader

//#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'z')
            str[i] = str[i] + 32;
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i - 1] <= 64 || str(i - 1) >= 91 && str(i - 1) <= 96 || str(i - 1) >= 123)
            str[i] = str[i] - 32
    }
    return str;
}

/*int main()
{
    char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

    printf("String antes: %s\n", str);
    char *result =  ft_strcapitalize(str);
    printf("String depois: %s\n", result);

    return 0;
}*/