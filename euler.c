#include <stdio.h>
#include <math.h>


//Number 1
int num1(){
	int total = 0;

	for (int x = 0; x < 1000; x++){
		if (x % 3 == 0 || x % 5 == 0){
			total += x;
		}
	}
	return total;

}

//Number 5
int gcd(int a, int b){
	int remainder = a%b;
	if (remainder == 0){
		return b;
	}
	return gcd(b,remainder);
}

int num5(){
	int prev_multiple = 2520;
	for (int x = 11; x <= 20 ; x++){
		prev_multiple *= x/gcd(prev_multiple,x);
	}
	return prev_multiple;
}

//Number 6
int num6(){
	int sum_square = 0;
	int square_sum = 0;

	for (int a = 1; a <= 100; a++){
		sum_square += a*a;
		square_sum += a;
	}

	return (square_sum*square_sum) - sum_square;

}




int main(){
	printf("Number 1: %d \n", num1());
	printf("Number 5: %d \n", num5());
	printf("Number 6: %d \n", num6());
}