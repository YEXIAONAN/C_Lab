#include <stdio.h>
#include <math.h>

int main() {
    double r = 0.1;
    int n = 10;
    double p;

    p = pow(1 + r, n);

    printf("10年后比现在增长 %.2f%%\n", p * 100);

    return 0;
}