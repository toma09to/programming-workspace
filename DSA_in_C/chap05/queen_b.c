// 各列に１個の王妃を配置する組合せを再帰的に列挙

#include <stdio.h>

int pos[8];         // 各列の王妃の位置

/*--- 盤面（各列の王妃の位置）を出力 ---*/
void print(void)
{
    for (int i = 0; i < 8; i++)
        printf("%2d", pos[i]);
    putchar('\n');
}

/*--- i列目に王妃を配置 ---*/
void set(int i)
{
    for (int j = 0; j < 8; j++) {
        pos[i] = j;
        if (i == 7)             // 全列に配置終了
            print();
        else
            set(i + 1);         // 次の列に王妃を配置
    }
}

int main(void)
{
    set(0);                     // 0列目に王妃を配置

    return 0;
}
