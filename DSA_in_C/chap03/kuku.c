// 九九の加算と乗算

#include <stdio.h>

/*--- x1とx2の和を求める ---*/
int sum(int x1, int x2)
{
    return x1 + x2;
}

/*--- x1とx2の積を求める ---*/
int mul(int x1, int x2)
{
    return x1 * x2;
}

/*--- 九九の表を出力 ---*/
void kuku(int (*calc)(int, int))
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++)
            printf("%3d", (*calc)(i, j));
        putchar('\n');
    }
}

int main(void)
{
    puts("九九の加算表");
    kuku(sum);

    puts("\n九九の乗算表");
    kuku(mul);

    return 0;
}
