#include<stdio.h>
#include<limits.h>

void main()
{
    int min,max,i,n,num;
    min = INT_MAX;
    max = INT_MIN;
     
    printf("How many numbers do you want to enter: ");
    scanf("%d",&n);
     
    for(i=0; i<n; i++)
    {
        printf("Number-%d: ",i+1);
        scanf("%d",&num);
        if(num>max)    max = num;
        if(num<min)    min = num;
    }
     
    printf("Smallest number = %d\nLargest number = %d",min,max);
}
