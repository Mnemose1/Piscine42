:Stdheader

#include <stdlib.h>
#include <stdio.h>

int is_separator(char c, const char *charset) {
    while (*charset) {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}

int count_words(char *str, const char *charset) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_separator(*str, charset)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **ft_split(char *str, const char *charset) {
    int num_words = count_words(str, charset);

    char **result = (char **)malloc((num_words + 1) * sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    int word_index = 0;
    int in_word = 0;
    char *start = str;

    while (*str) {
        if (is_separator(*str, charset)) {
            if (in_word) {
                int word_length = str - start;
                result[word_index] = (char *)malloc(word_length + 1);
                if (result[word_index] == NULL) {
                    for (int i = 0; i < word_index; i++) {
                        free(result[i]);
                    }
                    free(result);
                    return NULL;
                }
                strncpy(result[word_index], start, word_length);
                result[word_index][word_length] = '\0';
                word_index++;
                in_word = 0;
            }
        } else if (!in_word) {
            start = str;
            in_word = 1;
        }
        str++;
    }

    if (in_word) {
        int word_length = str - start;
        result[word_index] = (char *)malloc(word_length + 1);
        if (result[word_index] == NULL) {
            for (int i = 0; i < word_index; i++) {
                free(result[i]);
            }
            free(result);
            return NULL; 
        }
        strncpy(result[word_index], start, word_length);
        result[word_index][word_length] = '\0';
    }

    result[num_words] = NULL; 
    return result;
}

int main() {
    char *str = "Hello,World;Split;This";
    char *charset = ",;";

    char **result = ft_split(str, charset);

    if (result) {
        for (int i = 0; result[i]; i++) {
            printf("Element %d: %s\n", i, result[i]);
            free(result[i]); 
        }

        free(result); 
    }

    return 0;
}