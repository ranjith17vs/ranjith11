#include <stdio.h>
int main() {
    double a, b, sum;
    scanf("%lf %lf", &a, &b);
    sum = a + b;
    if (fabs(sum - (long long)sum) < 1e-9) {
        printf("%lld\n", (long long)sum);
    } else {
        printf("%.1f\n", sum);
    }
    return 0;
}
