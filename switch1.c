#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char a = 'a';
	
	switch(a) {
		case 0x61:          	// odpovida hodnote malemu a
			printf("Hello");
			break;
		case 98:				// odpovida dekadicky malemu b
			printf("World");
			break;
	}
	
	return 0;
}
