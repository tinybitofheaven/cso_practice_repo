#ifndef UTIL_C_
#define UTIL_C_

#include <stdio.h>

void pointers(int n, char b) {
	int *pn = &n;
	printf("n = %d \n", n);
	printf("pn = %p \n", (int*)pn); //type casting pointer
}

void condition(int n) {
	if(n < 0) {
		printf("negative \n");
	} else if (n == 0){
		printf("n = 0 \n");
	} else {
		printf("positive \n");
	}
}

void loops(int n) {
	for(int i = 0; i < n; i++) {
		printf("%d", i);
	}
	printf("\n");
}

void array(int n) {
	int arr[n];
	for(int i = 0; i < n; i++) {
		arr[i] = i+1;
	}
	for(int i = 0; i < n; i++) {
		printf("%d \n", arr[i]);
	}
}

int read() {
	int n;
	scanf("%d", &n);
	return n;
}

#endif