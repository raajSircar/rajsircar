#include<stdio.h>
int main()
{

int r,i,N,t,s=0;
printf("Write the number of resistors:");
scanf("%d",&N);

for(i=0;i<=N;i++){
printf("Write the value of the resistor %d:",i+1);
scanf("%d",&i);
s=1/i;
}
r=1/s;
printf("Resistance:",r);
return 0;
}

