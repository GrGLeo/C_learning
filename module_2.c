# include <stdio.h>

int main()
{
    float var1 = 3.14;
    int var2 = 3;

    // simple operation
    float i = var1 + var2;
    float j = ++i;
    float h = j++;

    // print on terminal
    printf("i is %f \n",i);
    printf("j is %f \n",j);
    printf("h is %f \n",h);
    printf("j is %f \n",j);

    return 0;
}


int main(void) 
{
	int n = -3;
	if(n < 0){
	    int absn = n*-1;
	    printf("The absolute value of %d is %d \n",n,absn);
	    printf("The value of n is %d",n);
	}
	return 0;