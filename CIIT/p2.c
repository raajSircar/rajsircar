#include<stdio.h>
int main(){

int i,s=0,N;
printf("How many numbers:");
scanf("%d",&N);
for(i=0;i<=N;i++)
s=s+i;
printf("SUM :%d",s);
return 0;
}
