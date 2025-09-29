#include <stdio.h>
int main() {
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    float Mileage,costKM;
    Mileage=z/(x/y);
    costKM=x/z;
    printf("Mileage : %07.2f",Mileage);
    printf("\nCost/KM : %07.2f",costKM);
    return 0;
}
