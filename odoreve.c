#include<iostream.h>
int main()
{
	int num;

	printf("Enter a number:");
	scanf("%d" , &num);
	if(num % 2 == 0){
		printf("Even Number");
		printf("Yes");
	   else
		   printf("Odd Number");
	   printf("No");
	}
}
