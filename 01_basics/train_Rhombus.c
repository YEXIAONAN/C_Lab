# include <stdio.h>

int main() {
    int a;
    int i;
    scanf("%d", &a);

    for (i=1;i <= a; i++){
        for (int k=1;k <= a - i;k++){
            printf(" ");
        }
        for (int j=1;j <= i * 2 - 1;j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}