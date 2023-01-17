#include <stdio.h>

#define NUM 10000

int main(void)
{
    int n;
    int count;
    int max_count = 0;
    int max_num = 0;
    
    for (int i = 1; i <= NUM; i++) {
        n = i;
        count = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = n * 3 + 1;
            }
            count++;
        }
        printf("%d: true\n", i);

        if (count > max_count) { 
            max_num = i;
            max_count = count;
        }
    }

    printf("max_num: %d, count: %d\n", max_num, max_count);

    return 0;
}
