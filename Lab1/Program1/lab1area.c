#define PI 3.14159
#include <stdio.h>
int main() {
    //To find the area of a circle
    float radius, area;
    printf("Enter the radius of the circle: ");         
    scanf("%f", &radius);
    area = PI * radius * radius; // Area = πr^2
    printf("Area of the circle = %.2f\n", area);
    return 0;
}

