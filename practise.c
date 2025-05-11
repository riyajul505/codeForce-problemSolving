#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
void hello(int arr[], int n, int i){
	if(i == n){
		return;
	}
	printf("%d", arr[i]);
	hello(arr, n, i+1);
}

int main(){
    // printing 1 to 10 using recursion
	int n = 5;
	int arr[5] = {1,2,3,4,5};
	hello(arr, n, 0);
	
	return 0;
}


