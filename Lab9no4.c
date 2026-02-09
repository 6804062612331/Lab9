#include <stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 
void printArray(int a[],int size);


int main() {
int a = 1, b = 2, c = 3;
int A[3] = {1,2,3},B[3] = {4,5,6};
int Size = sizeof(A)/sizeof(A[0]);
printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
swapValue(&a,&b,&c);
printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);

printf("Before swap array: A = ");
printArray(A,Size);
printf("\nBefore swap array: B = ");
printArray(B,Size);
swapArray(A,B,Size);
printf("\nAfter swap array: A = ");
printArray(A,Size);
printf("\nAfter swap array: B = ");
printArray(B,Size);

}


void printArray(int a[],int size){
	for(int i=0;i<size;i++){
	printf("%d ",a[i]);
	}
}
void swapValue(int *a, int *b, int *c){
	int temp,temp2;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
	
}

void swapArray(int a[], int b[], int size){
	int temp;
	for(int i=0;i<size;i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

