#include <stdio.h>

int main()
{
	int a,b,sum;
	while(1){
	    scanf("%d",&a);
	    scanf("%d",&b);
	    
	    if(a==99 && b==0){
	        printf("Finish.");
	        break;
	    }
	    sum=a+b;
	    printf("Sum: %d",sum);
	    
	    if(a==0 || b==0){
	        break;
	    }
	}
	return 0;
}

int forms()
{
	int number;
	scanf("%d",&number);

	if(number<=1){
		return 0;
	}

	if(number>20){
		number=20;
	}

	for(int i=0; i<number*2; i++){
		int space = i < number ? i: (number*2 - 1) - i;
		printf("*");
		for(int j=0; j<space; j++){
			print(" ");
		}
		printf("*\n");
	}
	
	return 0;
}

int leap_year()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	
	if(year%4==0){
	    if(year%100==0 && year%400==0){
	        printf("%d is leap year",year);
	    }
	    else if(year%100==0 && year%400!=0){
	        printf("%d is not a leap year",year);
	    }
	    else{
	        printf("%d is a leap year",year);
	    }
	}
	else{
	    printf("%d is not a leap year",year);
	}
	return 0;
}