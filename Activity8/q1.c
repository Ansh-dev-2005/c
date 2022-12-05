#include<stdio.h>
int main()
{
   int A[5][5],i,j,row=0,coloumn;
   printf("enter the elements of the array");
    for(i=0;i<5;i++)
    {
         for(j=0;j<5;j++)
         {
              scanf("%d",&A[i][j]);
         }
    }
     for (i = 0; i < 5; ++i) 
        {
            for (j = 0; j < 5; ++j) 
            {
                row = row + A[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, row);
            row = 0;
 
        }
        coloumn = 0;
        for (j = 0; j < 5; ++j) 
        {
            for (i = 0; i < 5; ++i)
            {
                coloumn = coloumn + A[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, coloumn);
            coloumn = 0;
 
        }


}