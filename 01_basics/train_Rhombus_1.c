#include <stdio.h>

int main() {
    int a,i,j,k;
    int i_1,j_1,k_1;
    scanf("%d",&a);

    for (i=1;i <=a;i++){
        for(j=1;j<= a - i;j++){
            printf(" ");
        }
        for(k=1;k<= i * 2 - 1;k++){
            printf("*");
        }
        printf("\n");



        //----
        // for (j_1=1;j_1<=){
        //     printf(" ");
        // }
        // for (k_1;) {
        //     printf("*");
        // }
        // printf("\n");
    }


    return 0;
}