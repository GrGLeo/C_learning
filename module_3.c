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