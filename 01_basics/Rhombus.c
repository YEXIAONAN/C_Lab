#include <stdio.h>

int main() {

    // 输入的总行数
    int n;
    // 当前行数
    int row;
    // 星号数量
    int star;
    // 空格数量
    int space;

    scanf("%d", &n);

    // 打印当前行数
    for (row = 1; row <= n; row++) {

        // 控制打印的当前行数
        for (space = 1; space <= n - row; space++) {
            // 打印当前行数空格
            printf(" ");
        }

        // 打印行数空格后面的*符号
        for (star = 1; star <= row; star++) {
            printf("*");
        }

        // 每完成上面行数 “打印行数空格后面的*符号” 就换行
        printf("\n");
    }

    return 0;
}
