#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

// int t_id[]={1,2};
void *print_fibonacci();
void *find_number();
int input;

int main(){
    pthread_t t[2];
    
    
    pthread_create(&t[0],NULL,print_fibonacci,NULL);
    pthread_join(t[0],NULL);
    
	pthread_create(&t[1],NULL,find_number,NULL);
    pthread_join(t[1],NULL);
	
	printf("input value: %d", sizeof(arr)/arr[0]);
	
	return 0;
}

void *print_fibonacci(){
    
	printf("Enter the term of fibonacci sequence: ");
	scanf("%d", &input);
	return NULL;
	
}


void *find_number(){
    int n;
	printf("How many numbers you are willing to search?:");
	scanf("%d", &n);
	return NULL;
	
}
