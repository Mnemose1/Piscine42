:Stdheader

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;
	
	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int	len;
	int	error;
	long	nb;

	error = checkerror(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

/*#include <stdio.h>

int main() {
    int decimal = 123;
    int binario = -45;
    int hexadecimal = 255;
    int octal = 63;

    printf("Decimal: %d\n", decimal);
    ft_putnbr_base(decimal, "0123456789");
    printf("\n\n");

    printf("Binário: %d\n", binario);
    ft_putnbr_base(binario, "01");
    printf("\n\n");

    printf("Hexadecimal: %d\n", hexadecimal);
    ft_putnbr_base(hexadecimal, "0123456789ABCDEF");
    printf("\n\n");

    printf("Octal: %d\n", octal);
    ft_putnbr_base(octal, "poneyvif");
    printf("\n\n");

    return 0;
}*/