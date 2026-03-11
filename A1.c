#include<stdio.h>
#include<math.h>
void amin()
{
	float x1,y1,x2,y2,distance;
	printf("enter x1 and y1(coordinates of first point):");
	scanf("%f%f",&x1,&y1);
	printf("enter x2 and y2(coordinates of second point):");
	scanf("%f%f",&x2,&y2);
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("enter the straight line distance between the two points:%2f\n",distance);
}
