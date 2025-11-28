#include <stdio.h>


int main() {
    double radius, area;
    const double PI =  3.141592653589793;

    // Input
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    // Calculation
    area = 4 * PI * radius * radius;

    // Output
    printf("Surface Area of the Sphere: %.2lf\n", area);

    return 0;
}
