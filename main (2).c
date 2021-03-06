// use of realloc
#include <stdio.h>
#include <stdlib.h>
int main() {
	int *ptr;
	int n;
	printf("enter the size of the array you want to create:\n");
	scanf("%d", &n);
	// calloc
	ptr = (int *)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("enter the value number %d of this array:\n", i);
		scanf("%d", &ptr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("the value at %d of this array is %d:\n", i, ptr[i]);
	}

	//  realloc
	printf("enter the new size of the array you want to create:\n");
	scanf("%d", &n);
	ptr = (int *)realloc(ptr, n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("enter the new value number %d of this array :\n", i);
		scanf("%d", &ptr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("the value at %d of this array is: %d\n", i, ptr[i]);
	}

	free(ptr);
	return 0;
}