# include <stdio.h>


// Takes two integers x and y, and returns x raised to the y power.


int power(int x, int y) {
	int i;
        int prod = 1;

	for (i=0; i<y; i++) {
		prod *= x;
       	}
	
	return prod;
}


int main() {
	printf("\n%d\n\n", power(3,4));
	return 0;
}

