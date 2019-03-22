#include<stdio.h>
#include<stdlib.h>

int main()
{
	int g,age;
	printf("Please enter your gender (male=1 or female=0):");
	scanf("%d",&g);
	printf("Please enter your age :");
	scanf("%d",&age);
	
	if (g==1)
	{
		if(age<18)
			printf("You can't get married,you need wait until 18 year old.\n");
		else
			printf("You can get married\n");
	}
	else if (g==0)
	{
		if(age<16)
			printf("You can't get married,you need wait until 16 year old.\n");
		else
			printf("You can get married\n");
	}
	else
	{printf("Gender can only enter 0 or 1\n");}
	
	system("pause");
	return 0;
}
