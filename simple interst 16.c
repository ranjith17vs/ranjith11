#include <stdio.h>
#include <stdlib.h>
int main() {
    double principal, rate, time, si;
    scanf("%lf", &principal);
    scanf("%lf", &rate);
    scanf("%lf", &time);
    if (principal > 0 && rate > 0 && time > 0) {
        si = (principal * rate * time) / 100.0;
     printf("%.2lf\n", si);
    } else {
        printf("All inputs must be greater than 0\n");
    }

    return 0;
}
