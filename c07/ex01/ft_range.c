:Stdheader

#include <stdlib.h>

int *ft_range(int min, int max) {
    if (min >= max) {
        return NULL;
    }

    int *result = (int *)malloc(sizeof(int) * (max - min));
    if (result == NULL) {
        return NULL;
    }

    for (int i = min; i < max; i++) {
        result[i - min] = i;
    }

    return result;
}