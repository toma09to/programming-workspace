#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 256

char *add_str(char str1[], char str2[])
{
    char *str;
    int size1 = -1;
    int size2 = -1;

    while (str1[++size1] != '\0') {}
    while (str2[++size2] != '\0') {}

    str = (char *)malloc(sizeof(char) * (size1 + size2 + 1));

    for (int i = 0; i < size1; i++) {
        str[i] = str1[i];
    }
    for (int i = 0; i < size2; i++) {
        str[i + size1] = str2[i];
    }
    str[size1 + size2] = '\0';

    return str;
}

int main(void)
{
    char str1[MAX_STR], str2[MAX_STR];
    char *answer;

    printf("str1? ");
    scanf("%s", str1);
    printf("str2? ");
    scanf("%s", str2);

    answer = add_str(str1, str2);

    printf("str: %s\n", answer);

    free(answer);

    return 0;
}
