#include <stdio.h>


int main(){

	void *pvData = NULL; //void pointer

	int *iData = NULL; //integer pointer

	char *cData = NULL; //character pointer

	float *fData = NULL;//float pointer

	//size of void pointer
	printf("size of void pointer(bytes) = %ld bytes\n",sizeof(pvData));
	
	//size of integer pointer
	printf("size of integer pointer(bytes) = %ld bytes\n",sizeof(iData));

	//sizeof char pointer
	printf("size of char pointer(bytes) = %ld bytes\n",sizeof(cData));

	//size of float pointer
	printf("size of float pointer(bytes) = %ld bytes\n",sizeof(fData));
	
	printf("--------------------------------------\n");

	int i = 10 ;

	char c = 'A';

	float f = 27.6;

	//pvData is a void pointer, using it to store the address of the different variables(float, int , and char), and after that getting back their values using the indirection operator and proper typecasting.
	
	//assigning address of character
	pvData = &c;

	//dereferencing void pointer whith character typcasting
	printf("c = %c\n",*(char *)pvData);

	//assigning address of integer
	pvData = &i;

	//dereferencing void pointer with integer typecasting
	printf("i = %d\n",*(int *)pvData);

	//assigning address of float
	pvData = &f;

	//dereferencing void pointer with float typecasting
	printf("f = %f\n",*(float *)pvData);



}
