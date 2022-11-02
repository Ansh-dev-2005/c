
#include<stdio.h>
void main()
{
    int marks,a;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<30 || marks>=0)
    {
        a=1;
    }
    else if(marks<45 || marks>=30)
    {
        a=2;
        printf("yes");
    }
    else if(marks<60 || marks>=45)
    {
        a=3;
    }
    else if(marks<75 || marks>=60)
        a=4;
    else if(marks<80 || marks>=75)
    {
        a=5;
    }
    else if(marks<95 || marks>=80)
    {
        a=6;
    }
    else
    {
        a=7;
    }
	switch(a)
	{
		case 1:
			printf("e");break;
		case 2:
			printf("d");break;
		case 3:
			printf("c");break;
		case 4:
			printf("b2");break;
		case 5:
			printf("b1");break;
		case 6:
			printf("a2");break;
		case 7:
			printf("a1");break;


	}
	return 0;
}