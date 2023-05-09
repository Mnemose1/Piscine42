:Stdheader

#include <unistd.h>
#include <limits.h>

void    ft_putchar(int c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb <= INT_MAX && nb >= INT_MIN)
    {
        if (nb == INT_MIN)
        {
            ft_putchar('-');
            ft_putchar('2');
            ft_putchar('147483648');
        }
        else if (nb < 0)
        {
            ft_putchar('-');
            ft_putchar(-nb);
        }
        else if (nb > 9)
        {
            ft_putchar(nb / 10);
            ft_putchar(nb % 10);
        }
        else
        {
            ft_putchar(nb + '0');
        }
    }
}

/*int main()
{
    ft_putnbr(42);
    return(0);
}*/