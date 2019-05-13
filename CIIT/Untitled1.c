#include<stdio.h>
int main()
{
int a[30],n;
printf("Enter the value of n:");

scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
/*for(int j=0;j<n;j++)
{
    int temp;
    temp=a[j];
    a[j]=a[n];
    a[n]=temp;
    n--;

}*/
printf("Reversed array is:");
for(int i=n-1;i>=0;i--){
    printf("%d",a[i]);
    }
return 0;
}
