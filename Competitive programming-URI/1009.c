#include<stdio.h>
int main()
{

   char n[50];
   double x,y,t;
   scanf("%s",&n);
   scanf("%lf%lf",&x,&y);
   t=x+(y*0.15);

    printf("TOTAL = R$ %.2lf\n",t);
    return 0;


}

