// 配列の要素の最大値を求める（要素の値は乱数で生成）

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*--- 要素数nの配列aの要素の最大値を求める ---*/
int maxof(const int a[], int n)
{
    int max = a[0]; // 最大値

    for (int i = 1; i < n; i++)
        if (a[i] > max) max = a[i];

    return max;
}

int main(void)
{
    int number; // 人数＝配列heightの要素数

    printf("人数 : ");
    scanf("%d", &number);

    int *height = calloc(number, sizeof(int));  // 要素数numberの配列を生成

    srand(time(NULL));                          // 時刻から乱数の種を初期化
    for (int i = 0; i < number; i++) {
        height[i] = 100 + rand() % 90;          // 100〜189の乱数を生成・代入
        printf("height[%d] = %d\n", i, height[i]);
    }

    printf("最大値は%dです。\n", maxof(height, number));

    free(height);   // 配列heightを破棄

    return 0;
}
