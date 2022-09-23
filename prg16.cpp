#include<stdio.h>

int main()
{
	int sum=0,nos,i,mark,avg;

	
	printf("Enter the number of subjects:");
	scanf("%d",&nos);
	
	for(i=0;i<nos;i++)
	{	
		printf("Enter the marks:");
		scanf("%d",&mark);
		sum = sum + mark;
		

}
	avg=sum/nos;
	avg = avg/20;
	
	if(avg>=4)
	{
		printf("A");
	}
	else if(avg>=3)
	{
		printf("B");
	}
	else if(avg>=2)
	{
		printf("C");
	}
	else if(avg>=1)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}