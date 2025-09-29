#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n=10,m=4;
    float a=4.0,b=2.0;
    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);
    printf("%d %d",n+m,n-m);
    printf("\n%.1f %.1f",a+b,a-b);
    return 0;
}
