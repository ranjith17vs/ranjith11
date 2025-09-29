#include <stdio.h>
int main() {
    double nums[4];
    for (int i = 0; i < 4; ++i) {
        if (scanf("%lf", &nums[i]) != 1) {
      return 0;
        }
    }

    double sum = nums[0] + nums[1] + nums[2] + nums[3];
    double avg = sum / 4.0;
    printf("Sum = %.1f\n", sum);
    printf("Average = %.1f\n", avg);
    return 0;
}
