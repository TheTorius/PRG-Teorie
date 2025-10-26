#include <stdio.h>
#include <stdlib.h>

int soucet(int a, int b);

int main(int argc, char *argv[]) {
	printf("%d",soucet(10,5));
	return 0;
}

int soucet(int a, int b) { return a+b; };