#include<stdio.h>
#include<conio.h>

void main()
{
    int num[50],i,N,sum=0;
    float avg;

    printf("\n Enter the total elements N : ");
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        printf("\n Enter value : %d ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<N;i++)
    {
       sum = sum + num[i];

    }
    avg = sum / N;

    printf("\n Sum of all values is : %d",sum);
    printf("\n Average of all values is : %.2f",avg);

}
