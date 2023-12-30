#include<stdio.h>
main()
{

    int c1,u1,c2,u2;
    float p1,p2,t;
    scanf("%d %d %f",&c1, &u1, &p1);
    scanf("%d %d %f",&c2, &u2, &p2);
    t=(u1*p1)+(u2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n",t);



}

