+#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	
	
	
	int input,a,b,result;
	char option;
	
do{
	
	printf("calculator:\n");
	
	printf("Enter 1 for addition:\n");
	printf("Enter 2 for subtraction:\n");
	printf("Enter 3 for multiplication:\n");
	printf("Enter 4 for division:\n");
	
	scanf("%d",&input);
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	switch(input)
	{
		case 1:
			result=a+b;
			printf("The Addition is : %d\n",result);
			break;
		case 2:
		    result=a-b;
			printf("The Subtraction is : %d\n",result);
			break;
		case 3:
		    result=a*b;
			printf("The Multiplication is : %d\n",result);
			break;
		case 4:
		    result=a/b;
			printf("The Division is :%d\n",result);
			break;
		default:
		    printf("wrong input\n");
		}
		printf("Do you want to continue ? (y/n)\n");
		
    }while(option=='y');
    return 0;
}