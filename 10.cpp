#include <stdio.h>
#include <math.h>

#define PI 3.14159

union Shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union Shape shape;
    int choice;

    printf("Enter the type of shape you want to calculate:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &shape.radius);

        float area = PI * pow(shape.radius, 2);
        printf("Area of the circle: %f\n", area);
    } else if (choice == 2) {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &shape.rectangle.length);

        printf("Enter the width of the rectangle: ");
        scanf("%f", &shape.rectangle.width);

        float area = shape.rectangle.length * shape.rectangle.width;
        printf("Area of the rectangle: %f\n", area);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
