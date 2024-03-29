:Stdheader

int ft_sqrt(int nb){
    if (nb < 0){
        return 0;
    }

    if (nb == 0){
        return 0;
    }

    int i = 1;
    while (i * i <= nb){
        if (i * i == nb){
            return i;
        }
        i++;
    }
    return 0;
}

/*#include <stdio.h>

int main() {
    printf("%d\n", ft_sqrt(4));
    return 0;
}*/