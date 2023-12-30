#include<stdio.h>
int main()
{
    int x,ct=0;
    scanf("%d",&x);
    if(x%2==0)
        x++;
    while(ct<6){
        printf("%d\n",x);
        x=x+2;
        ct++;
    }




    return 0;

}
