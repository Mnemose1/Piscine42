:Stdheader

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
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