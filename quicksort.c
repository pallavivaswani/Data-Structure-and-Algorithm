#include<stdio.h>
void sort(int a[], int p, int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        sort(a,p,q-1);
        sort(a,q+1,r);
    }
}
int partition(int a[], int p, int r)
{
    int i,j,temp,x;
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
        if(a[j]<x)
        {
            i=i+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
return i+1;
}
void main()
{
    int i,a[100],n;
    printf("Enter array size: \n");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,0,n-1);
    printf("After Sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
}
