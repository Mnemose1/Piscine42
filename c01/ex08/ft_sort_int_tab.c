:Stdheader

//#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int x;
    int swp;
    int y;

    x = 1;
    while (x < size)
    {
        swp = tab[x];
        y = x - 1;
        while (y >= 0 && tab[y] > swp)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swp;
		x++;
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

    ft_sort_int_tab(tab, size);

    printf("Array em ordem crescente:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}*/