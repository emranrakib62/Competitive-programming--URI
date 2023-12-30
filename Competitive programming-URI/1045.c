
#include<stdio.h>
int main()
{

    double a,b,c,x,y,z,temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b){temp=a;a=b;b=temp;}
    if(a<c){temp=a;a=c;c=temp;}
    if(b<c){temp=b;b=c;c=temp;}
    x=a*a;
    y=b*b;
    z=c*c;
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(x==(y+z))
            printf("TRIANGULO RETANGULO\n");
        if(x>(y+z))
         printf("TRIANGULO OBTUSANGULO\n");
         if(x<(y+z))
         printf("TRIANGULO ACUTANGULO\n");

         if((a==b)&&(b==c))
            printf("TRIANGULO EQUILATERO\n");
         else if(((a==b)&&(b!=c))||((b==c)&&(c!=a))||((c==a)&&(c!=b)))
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
