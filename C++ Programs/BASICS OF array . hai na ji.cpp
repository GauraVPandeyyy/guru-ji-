#include<stdio.h>
int main ( ) {
	int n;
	printf("enter number for size of ARRAY  :  ");
	scanf("%d",&n);
    int arr[n];
    for ( int i = 0; i<n;i++) {
    	scanf("%d",&arr[i]);
	}
	for (int i =0 ; i<n ; i++) {
		printf(" %d  ",arr[i]);
	}
}
    
