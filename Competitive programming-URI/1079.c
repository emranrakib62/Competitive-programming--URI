
#include<stdio.h>
int main(){

int n,i;
scanf("%d",&n);

for(i=0;i<n;i++){
  double a,b,c,avg=0;
scanf("%lf %lf %lf",&a,&b,&c);
avg=(a*2)+(b*3)+(c*5);

avg=avg/10.0;
printf("%0.1lf\n",avg);

}

return 0;

}
