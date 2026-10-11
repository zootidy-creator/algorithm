#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0||b==0||c==0)
    {
        printf("Not triangle");
        return 0;
    }
    else
    {
        if(a+b>c&&a+c>b&&b+c>a)
        {
            if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            {
                printf("Right triangle\n");
            }
            if(a*a+b*b>c*c&&a*a+c*c>b*b&&b*b+c*c>a*a)
            {
                printf("Acute triangle\n");
            }
            if (a*a+b*b<c*c||a*a+c*c<b*b||b*b+c*c<a*a)
            {
                printf("Obtuse triangle\n");
            }
            if (a==b||a==c||c==b)
            {
                printf("Isosceles triangle\n");
            }
            if (a==b&&a==c)
            {
                printf("Equilateral triangle\n");
            }
        }
        else
        {
            printf("Not triangle\n");
            return 0;
        }
    }
    

    return 0;
}
