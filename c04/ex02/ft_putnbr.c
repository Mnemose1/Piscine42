:Stdheader

#include <limits.h>
#include <unistd.h>

void ft_biggernumber(int nb)
{   
    int digit;
    int divisor = 1;

    while (nb / divisor >= 10) {
        divisor *= 10;
    }

    while (divisor > 0) {
        digit = (nb / divisor) % 10;
        char c = digit + '0';
        write(1, &c, 1);
        divisor /= 10;
    }
}

void ft_putnbr(int nb)
{
    if (nb == 0) {
        char c = '0';
        write(1, &c, 1);
        return;
    }
    
    if (nb > 0) {
        ft_biggernumber(nb);
        return;
    }

    if (nb == INT_MIN) {
        write(1, "-", 1);
        write(1, "2147483648", 10);
        return;
    }

    write(1, "-", 1);
    nb = -nb;
    ft_biggernumber(nb);
}

/*int main() {
    int num1 = 123;
    int num2 = -456;
    int num3 = INT_MIN;

    ft_putnbr(num1);
    write(1, "\n", 1);
    ft_putnbr(num2);
    write(1, "\n", 1);
    ft_putnbr(num3);
    write(1, "\n", 1);

    return 0;
}*/