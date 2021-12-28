#include <stdio.h>

int main() {
	// your code goes here
	int amount;
	float total;
	scanf("%d", &amount);
	scanf("%f", &total);
	if(amount<total && amount%5==0){

	    printf("%f",total-amount-0.5);
	}
	else{
	    	printf("%f", total);
	}
	return 0;
}

