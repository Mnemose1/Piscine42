:Stdheader

int ft_recursive_power(int nb, int power)
{
    int result = 1;
    
    if (power == 0) {
        return 1; 
    } else if (power < 0) {
        return 0; 
    }

    result = nb * ft_recursive_power(nb, power - 1); 
    
    return result;
}

/*#include <stdio.h>

int main() {
    int nb;
    int power;
    
    printf("Digite a base: ");
    scanf("%d", &nb);
    
    printf("Digite o expoente: ");
    scanf("%d", &power);

    int result = ft_recursive_power(nb, power);
    
    if (result == 0) {
        printf("Entrada inválida.\n");
    } else {
        printf("%d elevado a %d é: %d\n", nb, power, result);
    }

    return 0;
}*/