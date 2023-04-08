// bsearch関数を利用した降順に並んだ配列からの探索

#include <stdio.h>
#include <stdlib.h>

/*--- 整数を比較する関数（降順用） ---*/
int int_cmpr(const int *a, const int *b)
{
    if (*a < *b)
        return 1;
    else if (*a > *b)
        return -1;
    else
        return 0;
}

int main(void)
{
    int nx, ky;

    puts("bsearch関数による探索");
    printf("要素数 : ");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));   // 要素数nxのint型配列xを生成

    printf("降順に入力してください。\n");
    printf("x[0] : ");
    scanf("%d", &x[0]);

    for (int i = 1; i < nx; i++) {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        } while (x[i] > x[i - 1]);      // 一つ前の値よりも大きければ再入力
    }

    printf("探す値 : ");
    scanf("%d", &ky);

    int *p = bsearch(
                &ky,                            // 探索値へのポインタ
                x,                              // 配列
                nx,                             // 要素数
                sizeof(int),                    // 要素の大きさ
                (int (*)(const void *, const void *))int_cmpr   // 比較関数
            );

    if (p == NULL)
        puts("探索に失敗しました。");
    else
        printf("%dはx[%d]にあります。\n", ky, (int)(p - x));
    free(x);                            // 配列xを廃棄

    return 0;
}
