:Stdheader

int ft_iterative_factorial(int nb)
{
    int fatorial = 1;

    while (nb > '1')
        {
            fatorial = fatorial * nb;
            nb = nb - 1;
        }
    if (nb < 0)
        return 0;

    return fatorial;
}

/*#include <stdio.h>

int main() {
    int nb;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &nb);
    
    int resultado = ft_iterative_factorial(nb);

    printf("Fatorial: %d\n", resultado);
    
    return 0;
}*/