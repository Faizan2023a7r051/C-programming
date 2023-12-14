#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int j;
    for(i=0;i<n-i;j++)
    {
        int k=0;
        for(j=k+1;j<n-i;j++)
        {
        if(a[k]>a[j])
        {
            int t=a[j];
            a[j]=a[k];
            a[k]=t;
        }
        k++;
    }
    }
    printf("The sorted array");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
