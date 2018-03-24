#include <stdio.h>
#include <string.h>

int main( int argc, char *argv[] ) {
	if (argc < 2) {
		printf("Usage: %s <key>\n", argv[0]);
	} else {
		if (strlen(argv[1]) == 10) {
			printf("Key correct!\n");
		} else {
			printf("Thats the wrooong key.\n");
		}
	}
	return 0;
}
