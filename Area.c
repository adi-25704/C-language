#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int shape;
    float radius,length,breadth,side,tri_a,tri_b,tri_c,semi_perimeter,ar_circle,ar_rectangle,ar_square,ar_triangle;
    scanf("%d\n",&shape);
    switch(shape)
    {
        case 1:
        {
            scanf("%f",&radius);
            ar_circle = 3.14*radius*radius;
            printf("Area of circle: %f",ar_circle);
            break;
        }
        case 2:
        {
            scanf("%f %f",&length,&breadth);
            ar_rectangle = length*breadth;
            printf("Area of rectangle: %f",ar_rectangle);
            break;
        }
        case 3:
        {
            scanf("%f",&side);
            ar_square = side*side;
            printf("Area of square: %f",ar_square);
            break;
        }
        case 4:
        {
            scanf("%f %f %f",&tri_a,&tri_b,&tri_c);
            semi_perimeter = (tri_a+tri_b+tri_c)/2;
            ar_triangle = sqrt(semi_perimeter*(semi_perimeter-tri_a)*(semi_perimeter-tri_b)*(semi_perimeter-tri_c));
            printf("Area of triangle: %f",ar_triangle);
            break;
        }
        default:
        {
            break;
        }
    }
        
    return 0;
}
