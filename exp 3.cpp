#include<stdio.h>
int main()
{
	int i, number, sum = 0;
	printf("\n Please Enter the Maximum limit Value: ");
	scanf("%d",&number);
	printf("\n Odd Numbers Between 0 and %d are: ", number);
	for(i=1; i<=number; i++)
	{
		if(i%2 !=0)
		{
			printf("%d",i);
			sum = sum + i;
		}
	}
	printf("\n \n The Sum of Odd Numbers from 1 to %d = %d", number, sum);
	
	return 0;
}