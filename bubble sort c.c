#include<stdio.h>
int main()
{
    int i,j,n,min,swap;
    printf("enter the elements of the array");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[min])
            min=j;
        }
        if(min!=i)
        {
         swap=array[i];
         array[i]=array[min];
         array[min]=swap;
        }
    }
    printf("the sorted array :\n");
    for(i=0;i<n;i++)
    printf("%d\t",array[i]);
    return 0;
    
}