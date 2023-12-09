#include<stdio.h>
int main ( ) {
	int arr1[5],arr2[5],arr3[5],i;
	
	printf("enter values for first aaray \n");
	
	for (i=0;i<5;i++) {
		scanf("%d",&arr1[i]);
	}
	
	printf("enter values for second aaray \n");
	
	for (i=0;i<5;i++) {
		scanf("%d",&arr2[i]);
	}
	
	printf("here  are values of third array ");
	
	for (i=0;i<5;i++) {
		arr3[i] = arr1[i] + arr2[i];
		printf("%d  ",arr3[i]);
	}
}
