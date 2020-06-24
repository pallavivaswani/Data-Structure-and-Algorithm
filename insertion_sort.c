#include<stdio.h>
#define max 10
int insertionsort(int a[], int n)
{
int i,j,temp,g,h;
h=0;
for(i=1;i<max;i++)
{
temp=a[i];
j=i-1;
while((temp<a[j])&&j>=0)
{
a[j+1]=a[j];
j--;
a[j+1]=temp;
}
h++;
printf("Pass is: %d\n", h);
for(g=0;g<n;g++)
{
printf("%d \t",a[g]);
}
printf("\n");
a[j+1]=temp;
}
}
void main()
{
int a[100],n,i;
printf("Enter size:\n");
scanf("%d",&n);
printf("Enter elements:\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
insertionsort(a,n);
printf("After sorting: \n");
for(i=0;i<n;i++)
    printf("%d \t",a[i]);
}
