#include<stdio.h>
void sum(int*a,int*b,int*c,int*large);
int main()
{
	int n1,n2,n3,large;
	printf("enter the three numbers:");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("\n the large of three=large");
}
int big (int*a,int*b,int*c,int*large)
{
	if(*a>*b &*a>*c)*large=*a;
	if(*b>*a &*b>*c)*large=*b;
	else*large=*c
	printf("\n the biggest number is %d",*larger);
}
