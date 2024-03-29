:Stdheader

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max) {
    if (min >= max) {
        *range = NULL;
        return -1;
    }

    int size = max - min;
    int *result = (int *)malloc(sizeof(int) * size);
    if (result == NULL) {
        *range = NULL;
        return -1;
    }

    for (int i = 0; i < size; i++) {
        result[i] = min + i;
    }

    *range = result;
    return size;
}