#include<stdio.h>
int main()
{
	int age;
	printf("enter age :");
	scanf("%d",&age);
	if (age>=55)
	{
		printf("ticket rate=10$");
	}
	else if (age>=21 and age<=54)
	{
		printf("ticket rate=15$");
	}
	else if(age>=13 and age<=20)
	{
		printf("ticket rate = 10$");
	}
	else if (age>=3 and age<=12)
	{
		printf("ticket rate =5$");
	}
	else if(age<3)
	{
		printf("ticket rate = free");
	}
	return 0;
}