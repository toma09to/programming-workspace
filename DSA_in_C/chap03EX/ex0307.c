#include <stdio.h>
#include <stdlib.h>

void *seqsearch(const void *key, const void *base, size_t nmemb,
                size_t size, int (*compar)(const void *, const void *))
{
    const char *base0 = (const char *)base;

    for (size_t i = 0; i < nmemb; i++) {
        if ((*compar)(key, (const void *)(base0 + i * size)) == 0)
            return (void *)(base0 + i * size);
    }

    return NULL;
}

int int_cmp(const int *a, const int *b)
{
    if (*a < *b)
        return -1;
    else if (*a > *b)
        return 1;
    else
        return 0;
}

int main(void)
{
    int nx, ky;

    puts("seqsearch関数による探索");
    printf("要素数 : ");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));

    printf("昇順に入力してください。\n");
    printf("x[0] : ");
    scanf("%d", &x[0]);

    for (int i = 1; i < nx; i++) {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while (x[i] < x[i - 1]);
    }

    printf("探す値 : ");
    scanf("%d", &ky);

    int *p = seqsearch(
                &ky,
                x,
                nx,
                sizeof(int),
                (int (*)(const void *, const void *))int_cmp
            );

    if (p == NULL)
        puts("探索に失敗しました。");
    else
        printf("%dはx[%d]にあります。\n", ky, (int)(p - x));
    free(x);

    return 0;
}
