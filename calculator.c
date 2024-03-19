#include<stdio.h>
#include<conio.h>



int main()

{
	float num1;
	int op;
	float num2;
	float result;
	
	printf("enter first number");
	scanf("%f",&num1);
	
	
	printf("enter second number");
	scanf("%f",&num2);
	
	printf("\npress 1 for subtraction");
	printf("\npress 2 for addition"); 
	printf("\npress 3 for multiplication");
	printf("\npress 4 for division");
	scanf("%d",&op);
		
	switch(op)
	{
	
	
		case 1 : 
		result = num1-num2;
		printf("%f",result);
		break;
		
		case 2: 
		result = num1+num2;
		printf("%f",result);
		break;
		
		case 3 : 
		result = num1*num2;
		printf("%f",result);
		break;
		
		case 4 : 
		result = num1/num2;
		printf("%f",result);
		break;
		
		default :
		printf("invalid operator ");
			
		
	}
	
	return 0;
} 
