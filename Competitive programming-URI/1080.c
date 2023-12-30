#include<stdio.h>
int main(){

int n,i,h= -1,p= -1;

for(i=1;i<=100;i++){
    scanf("%d",&n);
    if(n>h){
        h = n;
        p = i;
    }
}

printf("%d\n",h);
printf("%d\n",p);



return 0;

}

