:Stdheader

//#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int a;

    i = 0;
    while (i < size)
    {
        a = tab[(size -1)];
        tab[(size -1)] = tab[i];
        tab[i] = a;
        size--;
        i++;
    }
}

/*int main(void)
{
    int size;
    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int tab[size];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &tab[i]);
    }

    ft_rev_int_tab(tab, size);

    printf("Array invertido:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}*/