#include<stdio.h>
int main(){
int i,j=7,k;
for(i=1;i<=9;i=i+2){

    for(k=0;k<3;k++){
        printf("I=%d J=%d\n",i,j);
        j--;
    }
    j=j+5;
}


return 0;
}

