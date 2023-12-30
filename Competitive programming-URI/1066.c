#include<stdio.h>
int main()
{
    int x,i,pos=0,neg=0,even=0,odd=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        if(x%2==0){even++;}
        if(x%2!=0){odd++;}
        if(x>0){pos++;}
        if(x<0){neg++;}
    }
    printf("%d valor(es) par(es)\n",even);
     printf("%d valor(es) impar(es)\n",odd);
     printf("%d valor(es) positivo(s)\n",pos);
     printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}
