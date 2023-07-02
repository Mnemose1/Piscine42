:Stdheader

#include <unistd.h>

void ft_print_memory(void *addr, unsigned int size)
{
    const char *hex_digits = "0123456789abcdef";
    unsigned char *ptr = (unsigned char *)addr;
    unsigned int i = 0;
    
    while (i < size)
    {
        char hex[2];
        hex[0] = hex_digits[(ptr[i] >> 4) & 0xF];
        hex[1] = hex_digits[ptr[i] & 0xF];
        write(1, hex, 2);
        
        if (i == size - 1)
            break;
            
        write(1, " ", 1);
        i++;
    }

    write(1, "\n", 1);
}

/*int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    unsigned int size = sizeof(arr);
    
    ft_print_memory(arr, size);
    
    return 0;
}*/