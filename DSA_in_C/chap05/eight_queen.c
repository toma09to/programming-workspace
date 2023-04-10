// ８王妃問題を解く

#include <stdio.h>

int flag_a[8];      // 各行に王妃が配置ずみか
int flag_b[15];     // ／対角線に王妃が配置ずみか
int flag_c[15];     // ＼対角線に王妃が配置ずみか
int pos[8];         // 各列の王妃の位置

/*--- 盤面（各列の王妃の位置）を出力 ---*/
void print(void)
{
    for (int i = 0; i < 8; i++)
        printf("%2d", pos[i]);
    putchar('\n');
}

/*--- i列目の適当な位置に王妃を配置 ---*/
void set(int i)
{
    for (int j = 0; j < 8; j++) {
        if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + 7]) {
            pos[i] = j;
            if (i == 7)
                print();        // 全列に配置終了
            else {
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 1;
                set(i + 1);     // 次の列に配置
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = 0;
            }
        }
    }
}

int main(void)
{
    for (int i = 0; i < 8; i++)
        flag_a[i] = 0;
    for (int i = 0; i < 15; i++)
        flag_b[i] = flag_c[i] = 0;

    set(0);                     // 0列目に配置

    return 0;
}
