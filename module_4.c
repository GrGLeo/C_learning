#include <stdio.h>

int main()
{
	int numbers[9];
	numbers[0] = 1;
	numbers[1] = 1;
	for(int i=2;i<10;i++){
	    numbers[i] = numbers[i-1] + numbers[i-2];
	}
	for(int i=0; i<10; i++){
	    printf("%d \n",numbers[i]);
	}
	for(int i=1;i<10;i+=2){
	    printf("%d \n", numbers[i]);
	}
	for(int i=0; i<10; i+=2){
	    printf("%d \n", numbers[i]);
	}
	return 0;
}