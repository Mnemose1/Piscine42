:Stdheader

//#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}

/*int main(void)
{ 
    int a;
    int b;

  printf ("\nDigite um numero:");
  scanf ("%d", &a);
  
  printf ("\nDigite um numero:");
  scanf ("%d", &b);
  
  ft_ultimate_div_mod(&a, &b);
  
  printf("\nResultado da divisao de %d / %d = %d. \n", a, b, a);
  printf("\nResultado do modulo de %d %% %d = %d. \n", a, b, b);
  return 0;
}*/