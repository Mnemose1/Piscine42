:Stdheader

int ft_iterative_power(int nb, int power)
{
    int calculation = 1;

    while (power > 0)
        {
            calculation *= nb;
            power --;
        }
    
    if (nb <= '0' || power < 0)
        return 0;

    return calculation;
}

/*#include <stdio.h>

int main() {
    int nb;
    int power;
    
    printf("Digite a base: ");
    scanf("%d", &nb);
    
    printf("Digite o expoente: ");
    scanf("%d", &power);

    int result = ft_iterative_power(nb, power);
    
    if (result == 0) {
        printf("Entrada inválida.\n");
    } else {
        printf("%d elevado a %d é: %d\n", nb, power, result);
    }

    return 0;
}*/