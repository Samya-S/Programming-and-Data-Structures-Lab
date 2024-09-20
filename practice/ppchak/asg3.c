/*******************************
Write a C Program that does the following:
1. Read in three integer points on a 2 dimensional plane. Each point is a pair of integers. Print the points. 
2. Find and print the length of each side. 
3. Check if all three form a single straight line. If so, print Result = 1. Otherwise print Result = 0. 
4. Check whether it is an isosceles triangle or not. If so, print Isosceles = 1. Otherwise print Isosceles = 0.
********************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the 1st point (x1,y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the 2nd point (x2,y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the 3rd point (x3,y3) : ");
    scanf("%d %d", &x3, &y3);
    printf("You have entered (%d, %d), (%d, %d), (%d, %d)\n", x1, y1, x2, y2, x3, y3);

    float l12 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    float l23 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    float l13 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    printf("The length of the three sides are %f, %f and %f\n", l12, l23, l13);

    int result = (l12 > l23 && l12 > l13) * (l12 == l23 + l13)
                +(l23 > l12 && l23 > l13) * (l23 == l12 + l13)
                +(l13 > l12 && l13 > l23) * (l13 == l12 + l23);
    printf("Result = %d\n", result);

    int checkTriangle = (l12+l23 > l13) + (l23+l13 > l12) + (l12+l13 > l23);
    int checkIsosceles = ((l12==l23)+(l23==l13)+(l12==l13)) * checkTriangle;
    printf("Isosceles = %d\n", checkIsosceles);

    return 0;
}