:Stdheard

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_rev_params(char* str) {
    if (*str) {
        ft_rev_params(str + 1);
        ft_putchar(*str);
    }
}

int main(int argc, char* argv[]) {
    if (argc >= 2) {
        ft_rev_params(argv[1]);
        ft_putchar('\n');
    }
    return 0;
}