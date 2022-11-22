
#include <stdio.h>

int Sum(int A[], int N)
{
	if (N <= 0)
		return 0;
	return (Sum(A, N - 1) + A[N - 1]);
}

int main()
{
	int A[5]={1,2,3,4,5} ;

	int N = sizeof(A) / sizeof(A[0]);
	printf("%d",Sum(A, N));
	return 0;
}
// Code By anSH
// Review me on Github: @Ansh-dev-2005
// Thank You