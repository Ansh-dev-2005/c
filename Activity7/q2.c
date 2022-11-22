#include<stdio.h>

int main()
{
    int A[5][5],i,j,a=0;
    printf("Enter the elements of the matrix");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           if(A[i][j]%2==0)
           {
               a=a+1;
           }
        }
    
    }
    printf("The number of even elements in the matrix is %d",a);


}