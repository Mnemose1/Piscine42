:Stdheader

#include <stdbool.h> 

bool is_invalid_base(char *base) {
    if (base[0] == '\0' || base[1] == '\0') {
            return true;
    }

    int i = 0;
    while (base[i] != '\0') {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] == base[i + 1]) {
            return true;
        }
        i++;
    }

    return false;
}

int char_to_digit(char c, char *base) {
    int i = 0;
    while (base[i] != '\0') {
        if (base[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int ft_atoi_base(char *str, char *base) {
    if (is_invalid_base(base)) {
        return 0;
    }

    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ') {
        i++;
    }

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] != '\0') {
        int digit = char_to_digit(str[i], base);
        if (digit == -1) {
            return 0;
        }
        result = result * strlen(base) + digit;
        i++;
    }

    return result * sign;
}

/*#include <stdio.h>

int main() {
    char *str = "101";
    char *base = "01";

    int result = ft_atoi_base(str, base);
    if (result == 0) {
        printf("Erro na conversão.\n");
    } else {
        printf("Resultado da conversão: %d\n", result);
    }

    return 0;
}*/