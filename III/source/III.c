#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

	if(argc <= 1) printf("Gebe mir einen Schluessel!\n");
	
	else{
		int sum = 0;
		for(int i = 0; i < strlen(argv[1]); i++) {
			sum += argv[1][i];
		}				
		if (sum == 666) printf("The hole to the dick dimension is open.\n");
		else printf("Not on my watch!\n");
	}
	
	return 0;

}




 		
