:Stdheader

#include <stdlib.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep) {
    if (size == 0) {
        char *empty_string = (char *)malloc(1);
        if (empty_string == NULL) {
            return NULL;
        }
        empty_string[0] = '\0';
        return empty_string;
    }

    int total_length = 0;
    for (int i = 0; i < size; i++) {
        total_length += strlen(strs[i]);
    }

    total_length += (size - 1) * strlen(sep);

    char *result = (char *)malloc(total_length + 1);
    if (result == NULL) {
        return NULL;
    }

    result[0] = '\0'; 

    for (int i = 0; i < size; i++) {
        strcat(result, strs[i]);
        if (i < size - 1) {
            strcat(result, sep);
        }
    }

    return result;
}