#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=9;i=i+2){
    k=7;
    for(j=0;j<3;j++){
        printf("I=%d J=%d\n",i,k);
        k--;
    }
}


return 0;
}
