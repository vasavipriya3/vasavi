#include<stdio.h>
int main()
{
    int n,rev=0,rem;
	printf("\n C program for reversing the digits of an interger: ");
	scanf("%d",&n);
	while (n>0)
	{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;	
	}
	printf("reversed number is= %d",rev);
	return 0;
}