#include<stdio.h>
int main()
{
  int x,y;

  double total;
  scanf("%d  %d",&x,&y);
    if(x==1)
    total =y*4.00;

    else if(x==2)
    total =y*4.50;

     else if(x==3)
    total =y*5.00;

     else if(x==4)
    total =y*2.00;

    else
    total =y*1.50;

    printf("Total: R$ %0.2lf\n",total);


    return 0;
}
