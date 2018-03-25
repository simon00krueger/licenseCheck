#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <key> \n", argv[0]);
	} else if (strlen(argv[1]) < 8) {
		printf("Thats the wroong key.\n");
	} else {
		int previous_char = 0;
		for (int i = 0; i < strlen(argv[1]); i++) {
			int current_char = argv[1][i] % 2;
			if (previous_char == current_char) {
				printf("Thats the wrooong key.\n");
				return 0;
			}
			previous_char = current_char;
		}
		printf("Key correct!\n");
		return 0;
	}
}
