#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 0xF, b = 53;
	
	int AND = a & b;
	int OR = a | b;
	int XOR = a ^ b;
	int nB = ~b;
	int nA = ~a;
	
	// smycka pro binarni vypis cisel
	printf("A: ");
	for(int i = 5; i >= 0; i--) {
		(a & (1UL << i)) ? printf("1") : printf("0"); 
	}
	
	printf("\nB: ");
	for(int i = 5; i >= 0; i--) {
		(b & (1UL << i)) ? printf("1") : printf("0"); 
	}
	
	printf("\n\nAND: %d",AND);
	printf("\nOR: %d",OR);
	printf("\nXOR: %d",XOR);
	printf("\nnB: ");
	for(int i = 5; i >= 0; i--) {
		(nA & (1UL << i)) ? printf("1") : printf("0"); 
	}
	printf("\nnA: ");
	for(int i = 5; i >= 0; i--) {
		(nB & (1UL << i)) ? printf("1") : printf("0"); 
	}
	
	return 0;
}
