#include <stdio.h>
int main(){
	float a, b, sum, difference, product, divison;
	printf("Enter the first number: ");
	scanf("%f", &a);
	

	printf("Enter the second number: ");
	scanf("%f", &b);

	sum = a + b;
	printf("Sum: %f", sum);

	difference = a - b;
	printf("\nDiffrence: %f", difference);
	

	product = a * b;
	printf("\nProduct: %f", product);

	divison = a / b;
	printf("\nDivison: %f", divison);
	
	
	return 0;
}
