#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);
    float x=(A*C)*0.5;
    float y=(3.14159*C*C);
    float z=(A+B)*C*0.5;
    float m=B*B;
    float n=A*B;
    printf("TRIANGULO: %.3f\n",x);
    printf("CIRCULO: %.3f\n",y);
    printf("TRAPEZIO: %.3f\n",z);
    printf("QUADRADO: %.3f\n",m);
    printf("RETANGULO: %.3f\n",n);
    return 0;

}

