#include<stdio.h>
void main()
{
	int choice;
	printf("    KYC verification system    \n");
	printf("1.PAN number\n");
	printf("2.AADHAR number\n");
	printf("3.APAAR number\n");
	printf("4.Driving license\n");
	printf("5.Passport\n");
	printf("Enter your choice(1 to 5):");
	sacnf("%d",&choice);
	switch(choice)
	{
		case 1://PAN
		printf("PAN verified!\n");
		break;
		case 2://AADHAR 
		printf("AADHAR verified!\n");
		break;
		case 3://APAAR
		printf("APAAR verified!\n");
		break;
		case 4://Driving license
		printf("Driving license verified!\n");
		break;
		case 5://Passport
		printf("Passport verified!\n");
		break;
		default:
		 printf("Not verified!\n");
	}
	return 0;
}
