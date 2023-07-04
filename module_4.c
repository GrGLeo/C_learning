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