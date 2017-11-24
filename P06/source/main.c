#include <stdio.h>
#include <stdlib.h>
int cubebyvalue(int n);
int main(void)
{
	int num = 5;
	printf("The original value of num is %d", num);
	num = cubebyvalue(num);
	printf("\nThe new value of num is %d", num);
	system("pause");
	return 0;
}
int cubebyvalue(int n)
{
	return n*n*n;
}