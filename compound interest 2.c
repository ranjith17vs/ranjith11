#include <stdio.h>
int main() {
    double principal, rate, time, ci, amount;    scanf("%lf", &principal);
    scanf("%lf", &rate);
    scanf("%lf", &time);
    if (principal > 0 && rate > 0 && time > 0) {
        amount = principal * pow((1 + rate / 100.0), time);
        ci = amount - principal;
        printf("%.2lf\n", ci);
    } else {
        printf("All inputs must be greater than 0\n");
    }
    return 0;
}
