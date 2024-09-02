#include <stdio.h>
struct Square {
    float area; 
};
struct Rectangle {
    float length;  
    float breadth;  
};
struct Shape {
    struct Square square;    
    struct Rectangle rectangle; 
};

int main() {
 
    struct Shape shape;

  
    float sideLength = 4.0;
    shape.square.area = sideLength * sideLength; 
    shape.rectangle.length = 5.0;
    shape.rectangle.breadth = 3.0;

  
    float rectangleArea = shape.rectangle.length * shape.rectangle.breadth;

 
    printf("Square Area: %.2f\n", shape.square.area);
    printf("Rectangle Length: %.2f, Breadth: %.2f, Area: %.2f\n",
           shape.rectangle.length, shape.rectangle.breadth, rectangleArea);

    return 0;
}