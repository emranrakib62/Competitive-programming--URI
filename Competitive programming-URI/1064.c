#include<stdio.h>
int main()
{

 double x,avg,pos_total=0;
 int i,pos_count=0;
 for(i=0;i<6;i++){
    scanf("%lf",&x);

    if(x>0){
        pos_total +=x;
        pos_count++;
    }
 }
   avg=pos_total/pos_count;
   printf("%d valores positivos\n",pos_count);
   printf("%0.1lf\n",avg);


    return 0;
}



