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

		// left pyramid
		for(int k=0; k<i+1; k++){
			printf("*");
		}
		// right pyramid
		for(int m=0; m<i; m++){
			if(i==0){
				continue;
			}
			printf("*", i);
		}
		printf("\n");
	}
	return 0;
}


