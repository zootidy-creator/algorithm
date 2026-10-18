#include <stdio.h>

int main(void)
{
    double p;
    scanf("%lf",&p);
    double money;
       if(p<=150.0)
       {
            money=p*0.4463;
       }
       if (p>150&&p<=400)
       {
            money=150*0.4463+(p-150)*0.4663;
       }
       if (p>400)
       {
            money=150*0.4463+250*0.4663+(p-400)*0.5663;
       }
       printf("%.1lf",money);
       
    

    return 0;
}
