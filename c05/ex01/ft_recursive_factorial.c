int	ft_recursive_factorial(int	nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}

/*#include <stdio.h>

int main() {
    int nb;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &nb);
    
    int resultado = ft_recursive_factorial(nb);

    printf("Fatorial: %d\n", resultado);
    
    return 0;
}*/