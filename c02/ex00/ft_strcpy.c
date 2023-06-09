:Stdheader

//#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    char    *prt = dest;

    if (dest == NULL)
        return NULL;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return prt;
}

/*char main(void)
{ 
    char dest[100];
    char src[100];

  printf ("\nDigite uma fruta:");
  scanf ("%s", &dest);
  
  printf ("\nDigite uma outra fruta:");
  scanf ("%s", &src);
  
  ft_strcpy(&dest, &src);
  
  printf("A fruta escolhida foi: %s\n", src);
  return 0;
}*/