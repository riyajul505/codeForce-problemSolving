#include <stdio.h>


int input;

int main(){
    
	int input;
	scanf("%d", &input);
	// pyramid pattern
	for(int i=0; i<input; i++){
		// printing space
		for(int j=1; j<input-i; j++){
			printf(" ");
		}
		for(int k=0; k<=i ; k++){
			printf("%d ", k+1);
		}

		printf("\n");
	}
	return 0;
}


