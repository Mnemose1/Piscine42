:Stdheader

int ft_is_prime(int nb) {
    int i = 2;

    if (nb == 2) {
        return 1;
    }

    if (nb <= 1) {
        return 0;
    }

    while (i < nb) {
        if (nb % i == 0) {
            return 0;
        }
        i++;
    }

    return 1;
}

int ft_find_next_prime(int nb)
{
    while (1) {
        if (ft_is_prime(nb)) {
            return nb;
        }
        nb++;
    }
}

/*#include <stdio.h>

int main() {
    printf("%d\n", ft_find_next_prime(7));
    return 0;
}*/