// クイックソート

#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

/*--- クイックソート（非再帰版） ---*/
void quick(int a[], int left, int right)
{
    IntStack lstack;        // 分割すべき先頭要素の添字のスタック
    IntStack rstack;        // 分割すべき末尾要素の添字のスタック

    Initialize(&lstack, right - left + 1);
    Initialize(&rstack, right - left + 1);

    Push(&lstack, left);
    Push(&rstack, right);

    while (!IsEmpty(&lstack)) {
        int pl = (Pop(&lstack, &left),  left);      // 左カーソル
        int pr = (Pop(&rstack, &right), right);     // 右カーソル
        int x = a[(left + right) / 2];              // 枢軸は中央の要素

        do {
            while (a[pl] < x) pl++;
            while (a[pr] > x) pr--;
            if (pl <= pr) {
                swap(int, a[pl], a[pr]);
                pl++;
                pr--;
            }
        } while (pl <= pr);
        if (left < pr) {
            Push(&lstack, left);    // 左グループの範囲の
            Push(&rstack, pr);      // 添字をプッシュ
        }
        if (pl < right) {
            Push(&lstack, pl);      // 右グループの範囲の
            Push(&rstack, right);   // 添字をプッシュ
        }
    }
    Terminate(&lstack);
    Terminate(&rstack);
}

int main(void)
{
    int nx;

    puts("クイックソート");
    printf("要素数：");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));   // 要素数nxのint型配列xを生成

    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    quick(x, 0, nx - 1);                // 配列xをクイックソート

    puts("昇順にソートしました。");
    for (int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);                            // 配列xを破棄

    return 0;
}
