 #include<stdio.h>
int main()
{
	int n,sum=0,d;
	printf("\nC program to print summing up of digits of an integer");
	scanf("%d",&n);
	while (n>0)
	{
	d=n%10;
	sum=sum+d;
	n=n/10;	
		}
		printf("sum is=%d",sum);
	
}
