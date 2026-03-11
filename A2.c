#include<stdio.h>
void main()
{
	int marks;
	printf("Enter students marks(0 to 100):");
	scanf("%d",&marks);
	if(marks<0||marks>100);
	printf("invalid mrks!please enter a value between 0 and 100.\n");
	else if(marks>=90)
	printf("Grade:A\n");
	else if(marks>=75)
	printf("Grade:B\n);
	else if(marks>=60)
	printf("Grade:C\n");
	else if(marks>=50)
	printf("Grade:D\n");
	else
	printf("Grade:F\n");
	
}
