#include<stdio.h>
#include<conio.h>
#define size 20
int binarySearch(int a[], int n, int x)
{
    int mid,beg,end;
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(x==a[mid])
            return mid+1;
        else if(x<a[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
    return -1;
}
void sort(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
}
int main()
{
int i,n,x, a[size], r;
printf("Enter size of array: \n");
scanf("%d", &n);
printf("Enter array elements: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to be searched: \n");
scanf("%d",&x);
sort(a,n);
printf("Sorted list is: \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
r=binarySearch(a,n,x);
if(r==-1)
{
    printf("Element not found");
}
else
{
    printf("Element %d found at position %d ", x, (r+1));
}
}
