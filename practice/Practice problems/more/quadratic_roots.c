#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, x_re, x_im;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double d = b*b - 4*a*c;
    
    if (d>0)
    {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("x1 = %lf and x2 = %lf", x1, x2);
    }
    else
    {
        x_re = (-b)/(2*a);
        x_im = (sqrt(-d))/(2*a);
        printf("x1 = %lf + %lfi and x2 = %lf - %lfi", x_re, x_im, x_re, x_im);
    }

    return 0;
}