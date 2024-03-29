:Stdheard

#include <stdio.h>
#include <string.h>

int calculateASCIISum(char* str) {
    int totalValue = 0;

    while (*str) {
        totalValue += *str;
        str++;
    }

    return totalValue;
}

void swapStrings(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void recursiveSort(char* strings[], int n, int i) {
    if (i >= n - 1) {
        return;
    }

    int minIndex = i;
    int minValue = calculateASCIISum(strings[i]);
    int j = i + 1;

    while (j < n) {
        int currentValue = calculateASCIISum(strings[j]);
        if (currentValue < minValue) {
            minValue = currentValue;
            minIndex = j;
        }
        j++;
    }

    swapStrings(&strings[i], &strings[minIndex]);

    recursiveSort(strings, n, i + 1);
}

void ft_sort_params(char* strings[], int n) {
    if (n <= 1) {
        return;
    }

    recursiveSort(strings, n, 0);
}

int main(int argc, char* argv[]) {
    ft_sort_params(argv + 1, argc - 1);

    while (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}