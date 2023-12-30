#include<stdio.h>
int main()
{
 float a,b,c,x;
 scanf("%f %f %f",&a,&b,&c);
 if(((a+b)<=c)||((b+c)<=a) || ((a+c)<=b))
    {
        x=0.5*(a+b)*c;
        printf("Area = %0.1f\n",x);

    }
    else{

        x=a+b+c;
        printf("Perimetro = %0.1f\n",x);
    }


    return 0;
}

