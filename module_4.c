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

int main()
{   
    char letter[26];
    for(int i=97;i<122;i++){
        letter[i-97] = i;
        printf("%c",letter[i-97]);
    }
    printf("\n%c%c%c%c%c",letter[6],letter[17],letter[4],letter[0],letter[19]);
	return 0;

}

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	float aux;
	int swapped;
	do{
	    swapped = 0;
	    for(int i=0;i<9;i++){
	        if(numbers[i]<numbers[i+1]){
	            swapped = 1;
	            aux = numbers[i+1];
	            numbers[i+1] = numbers[i];
	            numbers[i] = aux;

	        }
	    }
	    for(int i=0;i<9;i++){
	    printf("%.2f ",numbers[i]);
	}
	printf("\n");
	}while(swapped);

	return 0;
}