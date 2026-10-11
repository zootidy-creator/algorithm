#include <stdio.h>

int main(void)
{
    double m,h;
    scanf("%lf %lf",&m,&h);
    double BMI=m/(h*h);
    if(BMI<18.5)
    {
        printf("Underweight");
    }
    else if(BMI>=18.5&&BMI<24)
    {
        printf("Normal");
    }
    else
    {
        printf("%.4lf\nOverweight\n",BMI);
    }

    return 0;
}
